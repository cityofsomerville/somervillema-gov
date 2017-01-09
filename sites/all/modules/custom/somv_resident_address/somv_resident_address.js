(function($) {
  String.prototype.capitalize = function() {
      return this.charAt(0).toUpperCase() + this.slice(1);
  }

  function removeZips(item, key) {
    var itemArr = new Array;
    // We think it's a zip
    if (key !== 0 && item.length === 5 || item.length === 9 || item.length === 10) {
      // Might be a zip+4
      if (item.length === 10) {
        // try to split 00000-0000 format zips
        itemArr = item.split('-');
      }
      // Split worked so make one 9 character zip
      if (itemArr.length) {
        item = itemArr.join('');
      }
      // Was a zip so return null
      if (parseInt(item, 10)) {
        item = null;
      }
    }
    return item;
  }

  function removeState(item) {
    if (!item) {
      return;
    }
    if (item.length < 2) {
      return item;
    }
    // RegEx for ST or State
    var re = /(?:Ala(?:bama|ska)|Arizona|Arkansas|California|Colorado|Connecticut|Delaware|District of Columbia|Florida|Georgia|Hawaii|Idaho|Illinois|Indiana|Iowa|Kansas|Kentucky|Louisiana|Maine|Maryland|Massachusetts|Michigan|Minnesota|Miss(?:issippi|ouri)|Montana|Nebraska|Nevada|New (?:Hampshire|Jersey|Mexico|York)|North (?:Carolina|Dakota)|Ohio|Oklahoma|Oregon|Pennsylvania|Rhode Island|South (?:Carolina|Dakota)|Tennessee|Texas|Utah|Vermont|Virginia|Washington|West Virginia|Wisconsin|Wyoming|A[KLRZ]|C[AOT]|D[CE]|FL|GA|HI|I[ADLN]|K[SY]|LA|M[ADEINOST]|N[CDEHJMVY]|O[HKR]|PA|RI|S[CD]|T[NX]|UT|V[AT]|W[AIVY])/i;
    var m = re.exec(item);
    // If no match or match was not exact return the original item
    if (m === null || m.index !== 0 || m[0] !== m.input) {
      return item;
    } else {
      return false;
    }
  }

  function constructURL(arr) {
    var suffixArr = ["avenue","boulevard","circle","court","drive","highway","green","lane","park","parkway","place","road","row","square","street","street east","street place","terrace","west","way","ave","blvd","blv","cir","ct","dr","hwy","grn","ln","pk","prk","pkwy","prkwy","pl","rd","rw","sq","st","st east","st e","st slace","st pl","ter","w","wy"];
    var path = '/resident-address-lookup/search?';
    var streetNo = '';
    var streetName = '';
    var suffix = '';

    // First item in array should be the street number
    if (parseInt(arr[0], 10)) {
      streetNo = arr[0];
    }
    if (arr[arr.length - 1].length > 1 && suffixArr.indexOf(arr[arr.length - 1].toLowerCase()) !== -1) {
      suffix = arr[arr.length - 1].capitalize();
    } else {
      streetName = arr[arr.length - 1];
    }
    if (suffix !== '') {
      arr.pop();
    }
    if (streetNo !== '') {
      arr.shift();
    }
    if (streetName === '') {
      streetName = arr.join(' ');
    }
    path += 'field_resident_street_number_value=' + streetNo;
    path += '&field_resident_street_name_value=' + streetName;
    path += '&field_resident_street_suffix_value=' + (suffix !== '' ? suffix : 'All');
    return path;
  }

  function parseAddress(str) {
    if (!str || str.length === 0) {
      return '/resident-address-lookup/search';
    }
    var strArr = str.split(' ');
    var newStrArr = new Array;
    var newItem;
    var path = '';
    // Loop through all parts of the input string
    strArr.forEach(function(item, key) {
      // remove zip codes
      newItem = removeZips(item, key);
      // if not a zip then continue
      if (newItem) {
        // remove state
        newItem = removeState(item);
        // if not a state then continue
        if (newItem) {
          // remove commas and periods
          newItem = newItem.replace(/([,.])\s*$/, "");
          // Add to array if not somerville. We don't search by city
          if (newItem.toLowerCase() !== 'somerville') {
            newStrArr.push(newItem);
          }
        }
      }
    });
    if (newStrArr.length) {
      path = constructURL(newStrArr);
    }
    return path;
  }

  $(document).ready(
    function() {
      var $form = $('#resident-address-block').find('form');
      var path = '';
      var value = '';
      // When the form is submitted get the value and try parsing into a valid path
      $form.submit(function(e) {
        e.preventDefault();
        $this = $(this);
        value = $this[0][0].value;
        path = parseAddress(value);
        // Load the page from 'path'
        window.location.assign(path);
      });
    }
  );
})(jQuery)

