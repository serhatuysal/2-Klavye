#include <Arduino.h>
#include <SPIFFS.h>
#include <SPIFFSEditor.h>
#include <Wire.h>
#include <RTClib.h>
#include <SPI.h>
#include <AsyncElegantOTA.h> //https://www.youtube.com/watch?v=zXqhv_iy_lI
#include <SD.h>
#include "AsyncJson.h"

// #include <ArduinoJson.h>

AsyncWebServer server(80);
AsyncEventSource events("/events");

const byte latchPin = 12; // to latch the inputs into the registers
const byte clockPin = 13; // I choose the SCK pin
const byte dataPin = 14;  // I choose the MISO pin

const int numBits = 8; /* Set to 8 * number of shift registers */

String formatBytes(size_t bytes);

bool handleFileRead(AsyncWebServerRequest *request, String path);
void handleNotFound(AsyncWebServerRequest *request);

void wifi_baglan(const char *ssid, const char *password);

struct Config
{
  const char *ssid = "ESP32-Access-Point";
  const char *password = "123456789";
  const char *version = "v0.0.0";
  const char *cihazAciklama = "Test calısmaları devam ediyor";

  bool seriport;
  bool ipgoster;
};
Config config;

void setup()
{
  pinMode(dataPin, INPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(latchPin, OUTPUT);

  Serial.begin(115200);
  if (!SPIFFS.begin(false, "/spiffs", 60))
  {
    Serial.println("SPIFFS isleminde Hata var");
    return;
  }

  WiFi.softAP(config.ssid, config.password);

  IPAddress IP = WiFi.softAPIP();
  Serial.print("AP IP address: ");
  Serial.println(IP);

  server.addHandler(new SPIFFSEditor(SPIFFS));
  server.onNotFound([](AsyncWebServerRequest *request) { // If the client requests any URI
    if (!handleFileRead(request, request->url()))
    {                          // aranan sayfa var ise gönder
      handleNotFound(request); // otherwise, respond with a 404 (Not Found) error
    }
  });
  AsyncElegantOTA.begin(&server);

  server.serveStatic("/", SPIFFS, "/").setDefaultFile("index.html");

  server.addHandler(&events);
  server.begin();
}

bool handleFileRead(AsyncWebServerRequest *request, String path)
{
  if (path == "/")
  {
    // AsyncWebServerResponse *response = request->beginResponse(FILESYSTEM, "/index2.html");
    request->send(SPIFFS, "/index.html");
    return true;
  }

  if (path == "/admin")
  {
    // AsyncWebServerResponse *response = request->beginResponse(FILESYSTEM, "/index2.html");
    request->send(SPIFFS, "/admin.html");
    return true;
  }

  if (path == "/all")
  {

    return true;
  }

  if (path == "/selam")
  {
    request->send(200, "selam");
    return true;
  }

  if (path == "/arizalar")
  {
    request->send(SPIFFS, "/arizalar.html");
    return true;
  }

  if (path == "/yenidenbaslat")
  {
    if (request->hasParam("value"))
    { // Eğer parametre olarak value değeri varsa
      AsyncWebParameter *pPayload = request->getParam("value");
      String value = pPayload->value();
      request->send(200, "text/plain", "Cihaz yeniden baslatiliyor...");
      if (value == "1")
      {
        Serial.println("Cihaz Yeniden Baslatiliyor...");
        ESP.restart();
      }
    }
  }

  return false; // aranan link yok ise geriye false dönecek
}

void wifi_baglan(const char *ssid, const char *password)
{
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  if (WiFi.waitForConnectResult() != WL_CONNECTED)
  {
    Serial.printf("WiFi'ye Baglanamadi!\n");
    return;
  }
  Serial.print("IP: ");
  Serial.println(WiFi.localIP());
}

void handleNotFound(AsyncWebServerRequest *request)
{
  String message = "File Not Found\n\n";
  message += "URI: ";
  message += request->url();
  message += "\nMethod: ";
  message += (request->method() == HTTP_GET) ? "GET" : "POST";
  message += "\nArguments: ";
  message += request->args();
  message += "\n";
  for (uint8_t i = 0; i < request->args(); i++)
  {
    message += " " + request->argName(i) + ": " + request->arg(i) + "\n";
  }
  request->send(404, "text/plain", message);
}
/****************************************************************************/
/**                        byte dönüşüm fonksiyonu                         **/
/****************************************************************************/
String formatBytes(size_t bytes)
{
  if (bytes < 1024)
  {
    return String(bytes) + " B";
  }
  else if (bytes < (1024 * 1024))
  {
    return String(bytes / 1024.0) + " KB";
  }
  else if (bytes < (1024 * 1024 * 1024))
  {
    return String(bytes / 1024.0 / 1024.0) + " MB";
  }
  else
  {
    return String(bytes / 1024.0 / 1024.0 / 1024.0) + " GB";
  }
}

void loop()
{
  delay(1);
}