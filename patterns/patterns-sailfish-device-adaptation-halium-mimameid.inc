%package -n patterns-sailfish-device-adaptation-halium-mimameid
Summary: Sailfish HW Adaptation halium-mimameid

Requires: droid-hal-vendor-img-halium-mimameid
Requires: kernel-adaptation-halium-mimameid
Requires: droid-config-halium-mimameid-sailfish
Requires: droid-config-halium-mimameid-pulseaudio-settings
Requires: droid-config-halium-mimameid-policy-settings
Requires: droid-config-halium-mimameid-preinit-plugin
Requires: droid-config-halium-mimameid-flashing
Requires: droid-config-halium-mimameid-bluez5
Requires: droid-hal-version-halium-mimameid

Requires: qt5-plugin-generic-evdev

# Fixes off MTK behaviour
Requires: libtls-padding

# Hybris packages
Requires: libhybris >= 0.0.5.48
Requires: libhybris-libEGL
Requires: libhybris-libGLESv2
Requires: libhybris-libwayland-egl

# Halium
Requires: lxc
Requires: halium-android-rootfs

# Bluetooth
Requires: bluez5-tools
Requires: bluebinder

# Ofono
Requires: ofono-binder-plugin
Requires: dummy_netd

# NFC
Requires: nfcd-binder-plugin

# Vibra
Requires: ngfd-plugin-native-vibrator
Requires: libngf-qt5-qtfeedback

# Sensors
Requires: hybris-libsensorfw-qt5

# Pulseadio
Requires: pulseaudio-modules-droid
Requires: pulseaudio-modules-droid-hidl
Requires: audiosystem-passthrough-dummy-af

# for audio recording to work:
Requires: qt5-qtmultimedia-plugin-mediaservice-gstmediacapture

# These need to be per-device due to differing backends (fbdev, eglfs, hwc, ..?)
Requires: qt5-qtwayland-wayland_egl
Requires: qt5-qpa-hwcomposer-plugin
Requires: qtscenegraph-adaptation

# Add GStreamer v1.0 as standard
Requires: gstreamer1.0
Requires: gstreamer1.0-plugins-good
Requires: gstreamer1.0-plugins-base
Requires: gstreamer1.0-plugins-bad
Requires: nemo-gstreamer1.0-interfaces
Requires: gstreamer1.0-droid
Requires: gmp-droid

# This is needed for notification LEDs
Requires: mce-plugin-libhybris

## USB mode controller
## Enables mode selector upon plugging USB cable:
Requires: usb-moded
#Requires: usb-moded-defaults-android
#Requires: usb-moded-developer-mode-android

Requires: rfkill

# enable device lock and allow to select untrusted software
#Requires: jolla-devicelock-plugin-encsfa

# Enable home encryption
#Requires: sailfish-device-encryption
Requires: sailfish-device-encryption-community
Requires: sailfish-device-encryption-community-droid

# For GPS
Requires: geoclue-provider-hybris

# For mounting SD card automatically
Requires: sd-utils

%description -n patterns-sailfish-device-adaptation-halium-mimameid
Pattern with packages for halium-mimameid HW Adaptation

%files -n patterns-sailfish-device-adaptation-halium-mimameid
