import { CommonModule } from '@angular/common';
import { NgModule, ModuleWithProviders } from '@angular/core';
import { RouterModule } from '@angular/router';
import { API_BASE_URL, AppConsts } from './AppConsts';


@NgModule({
    imports: [
        CommonModule,
        RouterModule,
      
    ],
    declarations: [
        
    ],
    exports: [
       
    ]
})
export class CustomShared {
    static forRoot(): ModuleWithProviders<CustomShared> {
        return {
            ngModule: CustomShared,
            providers: [
                
            ]
        };
    }
}
