busybox mount -t vfat /dev/block/mmcblk1p1 /mnt/sdcard
rm -rf /mnt/sdcard/.android_secure
busybox umount /mnt/sdcard
