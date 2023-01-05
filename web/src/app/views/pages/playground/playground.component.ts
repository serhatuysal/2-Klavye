import { Component, Inject, Optional } from '@angular/core';
import { API_BASE_URL } from 'src/app/customshared/AppConsts';

@Component({
  selector: 'app-playground',
  templateUrl: './playground.component.html',
  styleUrls: ['./playground.component.scss']
})
export class PlaygroundComponent {
  constructor(@Optional() @Inject(API_BASE_URL) baseUrl?: string) {
  //alert(baseUrl);
}
}
