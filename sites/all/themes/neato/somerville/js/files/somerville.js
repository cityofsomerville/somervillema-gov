var Somerville=Somerville||{};define(["./feedback","./google-map","./media-gallery","./show-hide","./sidebar-nav"],function(i,n,e,o,t){return Somerville.Main=function(c,d,a,l){"use strict";function r(){a(".js-accordion-module").each(function(){var i=a(this);i.find(".js-accordion-link").click(function(n){n.preventDefault(),i.toggleClass("is-expanded").find(".js-accordion-content").stop(!0,!0).slideToggle()})})}function s(){i.init(),o.init(),t.init(),n.init(),e.init(),r()}return c.innerWidth<=830&&a(".contact-sb").addClass("is-expanded").children(".js-accordion-content").hide(),{init:s}}(window,document,jQuery),Somerville});
//# sourceMappingURL=../maps/files/somerville.js.map
