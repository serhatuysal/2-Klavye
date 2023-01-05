import { Component, Inject, OnInit, Optional } from '@angular/core';
import { Router, NavigationEnd } from '@angular/router';

import { IconSetService } from '@coreui/icons-angular';
import { iconSubset } from './icons/icon-subset';
import { Title } from '@angular/platform-browser';
import { API_BASE_URL } from './customshared/AppConsts';

@Component({
  selector: 'app-root',
  template: '<router-outlet></router-outlet>',
})
export class AppComponent implements OnInit {
  title = 'Ters Ozmoz Yönetim Paneli';

  constructor(
    private router: Router,
    private titleService: Title,
    private iconSetService: IconSetService,
    @Optional() @Inject(API_BASE_URL) baseUrl?: string
  ) {
    titleService.setTitle(this.title);
    // iconSet singleton
    iconSetService.icons = { ...iconSubset };

    console.log("Dİl Çekilecek")
  }

  ngOnInit(): void {
    this.router.events.subscribe((evt) => {
      if (!(evt instanceof NavigationEnd)) {
        return;
      }
    });
  }
}
