#!/bin/bash
# Kernel packer for GT-I9003 by skin1980
# slightly modified for our build structure

if test -e zImage
then
    ./mkbootimg --kernel zImage --ramdisk newramdisk.cpio.lzma --pagesize 1000 -o normalboot.img 
    tar -cvf new-GT-I9003_PDA.tar normalboot.img 
else
    echo "No zImage found"
fi

