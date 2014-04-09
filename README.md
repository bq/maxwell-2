WHAT IS THIS?
=============

Linux Kernel source code for the devices: 
* bq maxwell 2 
* bq maxwell 2 Lite 
* bq maxwell 2 Plus 
* bq maxwell 2 Quad Core

BUILD INSTRUCTIONS?
===================

Specific sources are separated by branches and each version is tagged with it's corresponding number. First, you should
clone the project:

	$ git clone git@github.com:bq/maxwell-2.git

After it, choose the version you would like to build:

	$ cd maxwell-2/
	$ git checkout 1.0.1_20130809-1552


Finally, build the kernel according the next defconfig files:

| device 										| defconfig								|
| --------------------------|-------------------------|
| bq maxwell 2 							| maxwell2_defconfig			|
| bq maxwell 2 Lite 				| maxwell2_lite_defconfig	|
| bq maxwell 2 Plus      		|	maxwell2_plus_defconfig	|
| bq maxwell 2 Quad Core 	  |	maxwell2_qc_defconfig	  |

	$ cd kernel/
	$ make maxwell2_defconfig
	$ make kernel.img





