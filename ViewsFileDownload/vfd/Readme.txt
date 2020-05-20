Views Files Downloader provides an option to download all the files attached to a view and a node. It provides a dedicated link for every view to download files. Downloaded files are added to a Zip file , which can be used by site visitor.

INSTALLATION
=============

1.After downloading place the extacted archive contents in sites/all/modules folder.
2.Download and install libraries module first and then only install views file
downloader.
3.Download PCLZip library and place it in libraries folder.
4.Make sure that machine name of the field containing file in "field_file".
5.Now create views and node with files field.
6.You can download all the files attached to a view by adding "download_view"
to URL.

Eg. Lets say link of your view in "http://example.com/myview". You can change it to
"http://example.com/download_view/myview" to download all the files attached to
this view.

ORIGINAL AUTHOR
===============
Module written by Gaurav Kapoor .
Gaurav Kapoor https://www.drupal.org/u/gauravkapoor


MAINTAINER
=============
2017: Gaurav Kapoor https://www.drupal.org/u/gauravkapoor
