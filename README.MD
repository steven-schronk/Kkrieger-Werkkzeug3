[![build_werkkzeug3](https://github.com/steven-schronk/Kkrieger-Werkkzeug3/actions/workflows/build_werkkzeug3.yml/badge.svg)](https://github.com/steven-schronk/Kkrieger-Werkkzeug3/actions/workflows/build_werkkzeug3.yml)

# .kkrieger & .werkkzeug3

.kkrieger is a German first-person shooter video game created by German demogroup [.theprodukkt](http://www.theproduct.de/) (a former subdivision of Farbrausch).  The entire game compiles down to a 96kb executable that can be run on a Windows computer with a [DirectX 9](https://en.wikipedia.org/wiki/DirectX) or greater graphics card.

.kkrieger makes extensive use of procedural generation methods. Textures are stored via their creation history instead of a per-pixel basis, thus only requiring the history data and the generator code to be compiled into the executable, producing a relatively small file size. Meshes are created from basic solids such as boxes and cylinders, which are then deformed to achieve the desired shape - essentially a special way of [box modeling](https://en.wikipedia.org/wiki/Box_modeling). These two generation processes account for the extensive loading time of the game — all assets of the gameplay are reproduced during the loading phase.

The entire game uses only 97,280 [bytes](https://en.wikipedia.org/wiki/Byte) of disk space. In contrast, most contemporaneous first-person shooters filled one or more CDs or DVDs. According to the developers, .kkrieger itself would take up around 200–300 MB of space if it had been stored the conventional way.

The game music and sounds are produced by a multifunctional synthesizer called V2, which is fed a continuous stream of [MIDI](https://en.wikipedia.org/wiki/MIDI) data. The synthesizer then produces the music in real time.

.werkkzeug3 is the tool used to create .kkrieger.

```
  kkrunchy/             - Executable compression tool for Windows.
  ktg/                  - OpenKTG texture generation tool.
  v2/                   - Multifunctional synthesizer produces music in realtime.
  werkkzeug3_kkrieger/
    fried/              - Farbrausch Image Encoder/Decoder
    materials/          - Direct Material System
    player_demo/        - Output player for Werkkzeug files.
    player_intro/       - Output player for Werkkzeug files.
    player_kkrieger/    - Output from Kkrieger Werkkzeug files.
    pngloader/          - Portable Network Graphics library and header files.
    shadercompile/      - Farbrausch Shader Compiler converts shader code into either binary or C/C++ header.
    werkkzeug3/         - Demoscene creation tool - used to create Kkrieger.
  yasm-1.3.0/           - YASM Assembler. Complete rewrite of NASM under BSD License.
```

This version of the project should build without much fuss on Visual Studio 2022 Community. It has not been tested with previous versions of Visual Studio or other platforms.

Just add YASM folder to your PATH and then build.

All of this code is released either under a BSD license or put in the public domain as stated per project.

Documentation for the tool is located [here](docs/index.md).

----

https://en.wikipedia.org/wiki/.kkrieger

https://en.wikipedia.org/wiki/Demoscene

https://www.youtube.com/watch?v=bD1wWY1YD-M


