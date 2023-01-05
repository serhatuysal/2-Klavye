import { NgModule } from '@angular/core';
import { HTTP_INTERCEPTORS } from '@angular/common/http';
import { LanguageService } from './language-service';



@NgModule({
    providers: [
        LanguageService
 
    ]
})
export class ServicesModule { }
