!function(){"use strict";var e,r=function(e,r,n,t){function a(t){function a(e){o.resolve(e)}function c(e){r.debug(e),o.reject(e)}var o=n.defer(),u=angular.extend({},{params:{_:Date.now()}},t);return e(u).then(a,c),o.promise}this.search=function(e){var r={method:"GET",params:e,url:t.API_BASE+t.SEARCH_ENDPOINT};return a(r)},this.events=function(e,r){var n={method:"GET",params:e,url:t.API_BASE+r};return a(n)}};try{e=angular.module("cosSearchServices")}catch(n){e=angular.module("cosSearchServices",[])}e.service("cosSearchService",["$http","$log","$q","apiEndpoints",r])}();
//# sourceMappingURL=../../maps/angular/services/cosSearchService.js.map
