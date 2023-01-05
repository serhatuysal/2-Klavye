import { Injectable } from '@angular/core';
import { HttpClient } from '@angular/common/http';

@Injectable({providedIn: 'root'})
export class LanguageService {
    constructor(private httpClient: HttpClient) { 


    }
    
    getLanguage(){
        return this.httpClient.get('url').pipe().subscribe((result: any) => {
            alert('sdsd');
          });
    }
}