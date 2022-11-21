# Smudge - Bad Moonee Rising

## by Chris Owen / Clebin Games 2022

Here is the source-code to [Smudge - Bad Moonee Rising](https://clebingames.itch.io/smudge-bad-moonee-rising). Smudge is 
written in C using [z88dk](https://z88dk.org/) and the sp1 library.

Game assets created using the following tools:

* [Aseprite](https://www.aseprite.org)
* [Tiled](https://www.mapeditor.org)

And converted to Spectrum format with [Spectrum Tiled Tool](https://github.com/clebin/spectiledtool) by the same author.

## Building

* make generate - converts assets to ASM. Make sure 'toolpath' points to SpecTiledTool and PHP is installed (command-line, 
no web-server required)
* make compile - compiles the game
* make tap - creates the tap file
* make run - runs the game
* make all - all of the above
