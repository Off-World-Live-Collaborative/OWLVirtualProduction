# FFmpeg Build

This directory contains FFmpeg `5.1.2` binaries built
using [vcpkg](https://github.com/microsoft/vcpkg) at the 
commit [d1e2ff](https://github.com/microsoft/vcpkg/commit/d1e2ff0c340f89cc14ca67883dd069c6ada93582)

They were built using the following command:

```
./vcpkg install ffmpeg[nvcodec,srt,openssl,amf]:x64-windows
```

This build **only** contains the the `LGPL` version
of FFmpeg and the license [can be found here](./LICENSE.txt)


## Documentation

Documentation for this version of FFmpeg [can be found here](http://ffmpeg.org/doxygen/5.1/)