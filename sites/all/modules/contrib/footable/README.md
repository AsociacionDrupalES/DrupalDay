# FooTable

This module provides integration for the jQuery
[FooTable](http://themergency.com/footable/) plugin for creating responsive
tables.


## Dependencies

The FooTable module currently requires the [Libraries
API](http://drupal.org/project/libraries) module, as well as the
[Views](http://drupal.org/project/views) module. In the future, the dependency
on Views may be removed, once a generic table theme function has been added.

To run the latest version of the FooTable plugin, you will also need to install
either the [jQuery Update](https://drupal.org/project/jquery_update) module or
the [jQuery Multi](https://drupal.org/project/jqmulti) module. See installation
step #3 below, for more details.


## Installation

1. If not already installed, download and install the dependencies above. 
2. Recent versions of the FooTable plugin have broken backwards compatibility
with jQuery 1.4.x, the version included with Drupal 7 by default. The options
are to:
    1. Install and configure the [jQuery
Multi](https://drupal.org/project/jqmulti) module. Follow steps #1-3 in the
Usage section of the jQuery Multi README.txt file. Skip the step on "targeting"
as the FooTable module includes the targeting code.
    2. Install and configure the [jQuery
Update](https://drupal.org/project/jquery_update) module.
3. Download the [FooTable jQuery plugin](https://github.com/bradvin/FooTable)
and place the resulting *FooTable* directory into the sites/all/libraries
directory.
4. Download the FooTable module and follow the instruction for [installing
contributed modules](http://drupal.org/node/895232).


## Usage

1. When creating a view, select the *FooTable* format.
2. Click on the *Settings* link, under the **Format** section.
3. Scroll down to the *FooTable Settings* section.
4. Designate the column to be used for the *Expandable column* setting.
5. Under the *Collapsed Columns* section, choose the "breakpoints" for which
each column should be hidden. 


## Ideas for Contributions 

Patches are always welcome. Some particular features that would be welcome
additions include:

1. Adding a generic table theme function, to allow FooTable to be used to style
non-Views tables.
2. Adding the ability to designate custom breakpoints and/or specify different
pixel widths for the default breakpoints.
    

## Credits

This module would not be possible without the FooTable plugin itself.  Thanks
to [bradvin](https://github.com/bradvin) for making it available and to all the
[others](http://themergency.com/footable/#thanks) who helped inspire it.

This module is largely based on code from the
[DataTables](http://drupal.org/project/datatables) module. Many thanks to
[duellj](http://drupal.org/user/168159) for developing and contributing that
module.
