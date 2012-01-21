#!/sbin/ext/busybox sh

rm /etc
mkdir /etc
cat /res/etc/recovery.fstab > /etc/recovery.fstab

rm /sdcard
mkdir /sdcard
mount -t vfat -o noatime,nodiratime /dev/block/mmcblk1p1 /sdcard >> /dev/null 2>&1
mount -t ext4 -o noatime,nodiratime,noauto_da_alloc,barrier=1 /dev/block/mmcblk1p1 /sdcard >> /dev/null 2>&1

rmdir /sdcard/external_sd
mkdir /sdcard/external_sd
mount -t vfat /dev/block/mmcblk0p1 /sdcard/external_sd

if [ ! -d /sdcard/.android_secure ]; then
    mkdir /sdcard/.android_secure
fi

if [ ! -d /sdcard/external_sd/.android_secure ]; then
    mkdir /sdcard/external_sd/.android_secure
fi

ASEC=`find /sdcard/external_sd/.android_secure | wc -l`
if [ "$ASEC" -gt 1 ]; then
    busybox mount --bind /sdcard/external_sd/.android_secure /sdcard/.android_secure
fi

umount /datadata

# Restart with root hacked adbd
echo msc_adb > /dev/usb_device_mode
touch /tmp/recovery.log
sync

NEEDS_ADBD=$(ps | grep adbd | grep -v grep)
if [ -z "$NEEDS_ADBD" ]; then
    /sbin/adbd recovery &
fi
