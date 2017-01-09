requirejs.config({
    //By default load any module IDs from js/lib
    baseUrl: '/sites/all/themes/neato/somerville/js',
    //except, if the module ID starts with "app",
    //load it from the js/app directory. paths
    //config is relative to the baseUrl, and
    //never includes a ".js" extension since
    //the paths config could be for a directory.
    paths: {
        //bootstrap: '../lib/bootstrap-2.0.4.min',
        app: '../app',
    }
});
requirejs(['files/somerville'],
function   (somv) {
    //jQuery, canvas and the app/sub module are all
    //loaded and can be used here now.
    somv.Main.init();
});
