org.eclipse.swt
===============

Main plug-in for the SWT user interface library.

Setting the classpath:
----------------------

To compile this project, you need to set the classpath specific for your operating and windowing system.
For this, rename one of the following files to `.classpath`:

* .classpath_win32 - Windows
* .classpath_cocoa - Mac OS X
* .classpath_gtk - Linux and all Unix variants

To see these files, you may have to remove the filter for ".* resources":
* In the Project Explorer: view menu > Customize View... > Filters
* In the Package Explorer: view menu > Filters...


Dependencies:
-------------

You also need to clone the <https://git.eclipse.org/r/#/admin/projects/platform/eclipse.platform.swt.binaries> Git repository 
and ensure that the fragment matching your windowing_system.operating_system.cpu_architecture (e.g. org.eclipse.swt.gtk.linux.x86_64) is open in your workspace.
The fragments provide the platform-specific native libraries.


More Information:
-----------------

See the [Readme.md](../../Readme.md) in the main directory of the Git repository for this project to learn more about SWT development.
