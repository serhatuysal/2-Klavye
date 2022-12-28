#include <stdio.h>
#ifdef _DEBUG
#include "../tools.hpp"
#include "ArduinoJson.h"
#include <fstream>
#include <iostream>
#else
#include "tools.hpp"
#include "ArduinoJson.h"
#include "SPIFFS.h"
#endif // TESTING

#ifndef LANGUAGE_H
#define LANGUAGE_H
#ifdef __cplusplus
extern "C"
{
#endif

    class Language
    {
    public:
        StaticJsonDocument<1024> doc;
        void init(const char *_code)
        {
            code = _code;
#ifdef _DEBUG

            std::wstring mytext = LoadUtf8FileToString(L"C:/test/language.json");
            deserializeJson(doc, mytext);
#else
        File file2 = SPIFFS.open("/language.json","r");
        if (!file2)
        {
            Serial.println("Failed to open file for reading");
            return;
        }

        while (file2.available())
        {
            deserializeJson(doc, file2);
        }

        file2.close();
#endif // TESTING
        }
        const char *get(const char *key)
        {
           
            JsonObject data = doc[code].as<JsonObject>();
            return data[key];
        }

    private:
        const char *code;
#ifdef _DEBUG
        size_t GetSizeOfFile(const std::wstring &path)
        {
            struct _stat fileinfo;
            _wstat(path.c_str(), &fileinfo);
            return fileinfo.st_size;
        }

        std::wstring LoadUtf8FileToString(const std::wstring &filename)
        {
            std::wstring buffer; // stores file contents
            FILE *f = _wfopen(filename.c_str(), L"rtS, ccs=UTF-8");

            // Failed to open file
            if (f == NULL)
            {
                // ...handle some error...
                return buffer;
            }

            size_t filesize = GetSizeOfFile(filename);

            // Read entire file contents in to memory
            if (filesize > 0)
            {
                buffer.resize(filesize);
                size_t wchars_read = fread(&(buffer.front()), sizeof(wchar_t), filesize, f);
                buffer.resize(wchars_read);
                buffer.shrink_to_fit();
            }

            fclose(f);

            return buffer;
        }
#else
#endif
    };

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* DIRSEK_H */