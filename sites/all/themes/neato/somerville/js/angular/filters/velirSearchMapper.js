!function(){"use strict";var r=function(){return function(r){if("string"!=typeof r)return r;var n=0==r.indexOf("?")?r.slice(1).split("&"):r.split("&"),t={};return n.map(function(r){if(r)return r.split("=")}).map(function(r){t[r[0]]=r[1]}),t}};angular.module("velirSearchMapper",[]).filter("searchMapper",[r])}();
//# sourceMappingURL=../../maps/angular/filters/velirSearchMapper.js.map
