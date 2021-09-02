# Hermes

## _3rd-party library for SIREN-based applications_

This repository contains a shortened C++ library for managing distance functions. 

Hermes code can be compiled under Qt for a broad set of platforms, including WebAssembly. The repository version was succesfully compiled with Emscripten coupled to Qt 5.15.1 with [em++](https://emscripten.org/docs/getting_started/downloads.html) compiler v2.0.22.

## Installation

1. Adjust the include paths of the `hermes.pro.example` file. 
4. Rename `hermes.pro.example` to `hermes.pro`. 
5. Use build.sh to create the static lib files. Notice, you can configure the building type in the `build.sh` file itself by selecting the qmake binary of your QT setup (e.g., wasm\_32 (default) or gcc\_64).

```sh
#!/bin/sh
/Qt/5.15.1/wasm_32/bin/qmake   #for Web-Assembly building
#/Qt/5.15.1/gcc_64/bin/qmake   #for desktop-binary building
make
```

Then, run the following command.

```sh
cd hermes
./build.sh && make clean
```

It will create the static library you can link to your [Higiia project](https://github.com/marcosivni/higiia). Best of luck!
