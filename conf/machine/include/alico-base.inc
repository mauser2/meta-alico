# Provides the Alico Kinetic common settings

include conf/machine/include/alico-default-providers.inc

# Add u-boot image to rootfs
EXTRA_IMAGEDEPENDS = "u-boot-alico"

# Specify kernel image type
KERNEL_IMAGETYPE = "uImage"

# Specify machine features
MACHINE_FEATURES = "kernel26 apm usbgadget usbhost vfat"

# Ship kernel modules
MACHINE_EXTRA_RRECOMMENDS = "kernel-modules"

# Specify rootfs image filesystem types
IMAGE_FSTYPES += "jffs2 ext2.gz tar.bz2"

# Specify serial console settings
SERIAL_CONSOLE = "115200 tty02"
