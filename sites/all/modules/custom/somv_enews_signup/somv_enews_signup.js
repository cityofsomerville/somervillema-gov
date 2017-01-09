console.log('here');
(function($) {
  window.localizedErrMap = {};
  window.localizedErrMap['required'] = 'This field is required.';
  window.localizedErrMap['ca'] = 'An unexpected error occurred while attempting to send email.';
  window.localizedErrMap['email'] = 'Please enter your email address in name@email.com format.';
  window.localizedErrMap['birthday'] = 'Please enter birthday in MM/DD format.';
  window.localizedErrMap['anniversary'] = 'Please enter anniversary in MM/DD/YYYY format.';
  window.localizedErrMap['custom_date'] = 'Please enter this date in MM/DD/YYYY format.';
  window.localizedErrMap['list'] = 'Please select at least one email list.';
  window.localizedErrMap['generic'] = 'This field is invalid.';
  window.localizedErrMap['shared'] = 'Sorry, we could not complete your sign-up. Please contact us to resolve this.';
  window.localizedErrMap['state_mismatch'] = 'Mismatched State/Province and Country.';
  window.localizedErrMap['state_province'] = 'Select a state/province';
  window.localizedErrMap['selectcountry'] = 'Select a country';
  var postURL = 'https://visitor2.constantcontact.com/api/signup';

  // $(document).ready(
  //   function() {
  //     var $form = $('#somv-enews-signup-form');
  //     var path = '';
  //     var value = '';
  //     console.log('form', $form);
      
  //     $form.submit(function(e) {
  //       e.preventDefault();
  //       $this = $(this);
  //       value = $this[0][0].value;
  //       console.log($this);
  //       console.log(value);
  //     });
  //   }
  // );
})(jQuery);