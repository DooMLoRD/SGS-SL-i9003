HOW TO BUILD KERNEL 2.6.35 FOR GT-I9003

1. How to Build
	- get Toolchain
	Visit http://www.codesourcery.com/, download and install Sourcery G++ Lite 2009q3-68 toolchain for ARM EABI.
	Extract kernel source and move into the top directory.
	$ toolchain\arm-eabi-4.4.0
	$ cd kernel/
	$ make android_latona_r08_eng_defconfig
	$ make
	
2. Output files
	- Kernel : kernel/arch/arm/boot/zImage
	- Device driver modules :
		samsung/gps/gps.ko
		samsung/vibetonz/vibetonz.ko
		samsung/battery/samsung_battery.ko
		samsung/bma222/yas_acc_kernel_driver.ko
		samsung/orientation/yas_ori_kernel_driver.ko
		samsung/yas529/yas_mag_kernel_driver.ko
		samsung/fm_si4709/Si4709_driver.ko
		samsung/gp2a/gp2a.ko
	
3. How to make .tar binary for downloading into target.
	- Use mkbootimg utility in Android development kit which create merged image (normalboot.img)
	  containing kernel and rootfilesystem.
    - make tarfile with command as below 
	$ tar cvf GT-I9003_Kernel_Gingerbread.tar normalboot.img

