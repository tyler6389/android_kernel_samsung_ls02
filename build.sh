#!/bin/bash

export ARCH=arm
export CROSS_COMPILE=/opt/toolchains/arm-eabi-4.4.3/bin/arm-eabi-
make countdev_defconfig
make -j16

echo Samsung Galaxy Gear SM-V700 CyanogenMod 11 Kernel Source
