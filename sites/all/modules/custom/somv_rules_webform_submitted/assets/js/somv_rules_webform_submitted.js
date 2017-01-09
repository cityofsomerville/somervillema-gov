(function($) {
    Drupal.behaviors.somvRulesWebformSubmitted = {
    // Read Cookie
    // @n Name
    rc:function(n) {
      var e = n+"=",
        ca = document.cookie.split(';'), // Grap all the cookies and make into an array
        i, c;

      for(i = 0; i < ca.length; i++) {
        c = ca[i];

        while (c.charAt(0) == ' ')
          c = c.substring(1,c.length);

        // If the name (@n) is in the cookie array return the cookie
        if (c.indexOf(e) === 0)
          return c.substring(e.length,c.length);
      }

      // No cookie found
      return null;
    },
    domain:function(hostname) {
      var parts = hostname.split('.').reverse();

      if (parts.length >= 3) {
        // see if the second level domain is a common SLD.
        if (parts[1].match(/^(com|edu|gov|net|mil|org|nom|co|name|info|biz|io)$/i)) {
          return parts[2] + '.' + parts[1] + '.' + parts[0];
        }
      }

      return parts[1] + '.' + parts[0];
    },
    attach: function (context, settings) {
      var self = this; // The object
      var data = settings['somv_rules_webform_submitted']; // Drupal.settings object
      $('.page', context).one('test-webform-cookie', function () { // Attach only one time
        var sess = self.rc(data.sess_cookie_name); // value set in somv_rules_webform_submitted_test_cookie
        var webform = self.rc(data.cookie_name);
        // The cookie is not set in the client, so redirect to the form node we've been testing for
        if (!sess && !webform) {
          var url = '//' + document.location.host + '/node/' + data.nid;
          document.location.replace(url);
        }
      }());
    }
  };
})(jQuery);
