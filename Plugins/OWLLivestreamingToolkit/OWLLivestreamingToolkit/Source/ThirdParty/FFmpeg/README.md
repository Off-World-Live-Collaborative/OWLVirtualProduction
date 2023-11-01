# FFmpeg Build

This directory contains FFmpeg `5.1.2` binaries built
using [vcpkg](https://github.com/microsoft/vcpkg) with the fork
[github.com/Off-World-Live/vcpkg] at the [commit](./vcpkg_commit)

They were built using the following command:

```
vcpkg.exe install ffmpeg[srt,nvcodec,amf,openssl,avformat,avcodec,avdevice,swresample,swscale,owlsuffix] --triplet=x64-windows
```

This build **only** contains the the `LGPL` version
of FFmpeg and the license [can be found here](./LICENSE.txt)

It also includes the following open source libraries:

- `OpenSSL` version 3.1.0 - [licence here](./share/openssl/copyright)
- `amd-amf` [licence here](./share/amd-amf/copyright)
- `ffnvcodec` [licence here](./share/ffnvcodec/copyright)
- `libsrt` version 1.5.0 [licence here](./share/libsrt/copyright)


## Documentation

Documentation for this version of FFmpeg [can be found here](http://ffmpeg.org/doxygen/5.1/)