define(function() {
  return function (window, document, $, undefined){
    'use strict';

    var mapContainerClass = "js-google-map",
      latlngCityHall = "",
      latlngDPW = "",
      latlngParking = "",
      latlngSafety = "",
      googleMap,
      currentInfoWindow,
      zoom = 13;

    function setZoom() {
      if($('.breakpoint-m-min').width() <= window.innerWidth){
        zoom = 14;
      }
    }

    function setLocations(){
      latlngCityHall = new google.maps.LatLng(42.387206, -71.098169);
      latlngDPW = new google.maps.LatLng(42.396894, -71.107441);
      latlngParking = new google.maps.LatLng(42.400127, -71.125263);
      latlngSafety = new google.maps.LatLng(42.379218, -71.092590);
    }

    function createMap(){
      var mapContainer = $('.' + mapContainerClass)[0];

      var mapOptions = {
        scrollwheel: false,
        draggable: false,
        zoom: zoom,
        center: latlngCityHall
      };

      googleMap = new google.maps.Map(mapContainer,mapOptions);
      console.log(googleMap);
    }

    function createMarkers(){
      createMarker({
        'title':"City Hall",
        'street':'93 Highland Ave.',
        'zip':'02143',
        'url':'/contact'
      },latlngCityHall);
      createMarker({
        'title':"Department of Public Works",
        'street':'1 Franey Rd.',
        'zip':'02145',
        'url':'/dpw'
      },latlngDPW);
      createMarker({
        'title':"Traffic and Parking",
        'street':'133 Holland St.',
        'zip':'02144',
        'url':'/departments/traffic-and-parking'
      },latlngParking);
      createMarker({
        'title':"Public Safety Building (Police)",
        'street':'220 Washington St.',
        'zip':'02143',
        'url':'/police'
      },latlngSafety);
    }
    function createMarker(data, position){
      var infoWindow = new google.maps.InfoWindow({
        content: '<div class="info-window"><h3><a href="' + data.url + '">' + data.title + '</a></h3><span>' + data.street + '</span><br /><span>Somerville, MA ' + data.zip + '</span></div>'
      });

      var marker = new google.maps.Marker({
        position: position,
        title:data.title
      });

      marker.setMap(googleMap);

      google.maps.event.addListener(marker, 'click', function() {
        if (currentInfoWindow) {
          currentInfoWindow.close();
        }
        currentInfoWindow = infoWindow;
        infoWindow.open(googleMap,marker);
      });
    }

    function init(){
      //wait for dom ready
      $(function(){
        if($('.' + mapContainerClass).length) {
          setZoom();
          setLocations();
          createMap();
          createMarkers();
        }
      });

    }
    return {
      init:init
    }

  }(window,document,jQuery);
});
