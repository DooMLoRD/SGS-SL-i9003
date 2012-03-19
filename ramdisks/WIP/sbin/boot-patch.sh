#!/sbin/ext/busybox sh

echo 1 > /sys/class/leds/button-backlight/brightness

/system/bin/logwrapper /sbin/ext/busybox sh /sbin/boot/busybox.sh
/system/bin/logwrapper /sbin/ext/busybox sh /sbin/boot/cwmfix.sh
/system/bin/logwrapper /sbin/ext/busybox sh /sbin/boot/properties.sh
/system/bin/logwrapper /sbin/ext/busybox sh /sbin/boot/check-ver.sh
/system/bin/logwrapper /sbin/ext/busybox sh /sbin/boot/install.sh
# Tweaks script moved to /system/etc/init.d
#/system/bin/logwrapper /sbin/ext/busybox sh /sbin/boot/tweaks.sh
/system/bin/logwrapper /sbin/ext/busybox sh /sbin/boot/scripts.sh

echo 0 > /sys/class/leds/button-backlight/brightness
read sync < /data/sync_fifo
rm /data/sync_fifo
setprop cm.filesystem.ready 1
