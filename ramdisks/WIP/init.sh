#!/sbin/ext/busybox sh
export PATH=/sbin/ext/

busybox cd /
busybox date >>boot.txt
exec >>boot.txt 2>&1
busybox rm -fr init
busybox mkdir -p /proc
busybox mkdir -p /sys
busybox mount -t proc proc /proc
busybox mount -t sysfs sysfs /sys

if busybox grep -q bootmode=2 /proc/cmdline || busybox grep -q androidboot.mode=reboot_recovery /proc/cmdline ; then
    # recovery boot
    busybox cp recovery.rc init.rc
	busybox rm init.latona.rc
	busybox cp build.prop.rec build.prop
	busybox cp /sbin/cwm /sbin/recovery
fi

if busybox grep -q bootmode=5 /proc/cmdline || busybox grep -q androidboot.mode=usb_charger /proc/cmdline ; then
    # charging mode
    busybox cp lpm.rc init.rc
	busybox rm init.latona.rc
fi

busybox umount /sys
busybox umount /proc
busybox date >>boot.txt

busybox rm -fr /dev/*
busybox cp init.bak init

exec /init
