
import { Injectable, Inject, Optional, InjectionToken } from '@angular/core';
import { environment } from 'src/environments/environment';
export const API_BASE_URL = new InjectionToken<string>('API_BASE_URL');

export class AppConsts {

  

    static getAppBaseUrl() {
        if (environment.production) {
            return window.location.protocol +"//"+window.location.host;
          }
        return "https://10.1.4.56";
    }


}