#!/sbin/ext/busybox sh

# starting
echo "[ START ]" > /data/local/tmp/log_uc-kernel-mods.log
date >> /data/local/tmp/log_uc-kernel-mods.log

# execute tweaks
/system/bin/logwrapper /sbin/busybox run-parts /res/uc-kernel-mods/scripts

# DONE
echo "[ DONE ]" >> /data/local/tmp/log_uc-kernel-mods.log
