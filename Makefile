toolpath = /Volumes/Work/misc/spec-dev/SpecTiledTool/SpecTiledTool.php

# generate tilemap objects
objects: buck-house laundrette brick-house victorian-house rural-house-1 rural-house-2 \
	rundown-house-1 rundown-house-2 posh-house factory castle \
	road-1 road-2 road-3 pavement \
	streetlamp phone-box tree-1 bush-1 bush-2 bush-3 \
	shop-1 shop-2 pub pub-sign-1 pub-sign-2 town-cross sign \

laundrette:
	php $(toolpath) \
		--name=laundrette \
		--map=raw-assets/objects/laundrette.tmj \
		--output-folder=./assets/objects \
		--format=asm \
		--add-dimensions

brick-house:
	php $(toolpath) \
		--name=brick-house \
		--map=raw-assets/objects/brick-house.tmj \
		--output-folder=./assets/objects \
		--format=asm \
		--add-dimensions

victorian-house:
	php $(toolpath) \
		--name=victorian-house \
		--map=raw-assets/objects/victorian-house.tmj \
		--output-folder=./assets/objects \
		--format=asm \
		--add-dimensions

rural-house-1:
	php $(toolpath) \
		--name=rural-house-1 \
		--map=raw-assets/objects/rural-house-1.tmj \
		--output-folder=./assets/objects \
		--format=asm \
		--add-dimensions

rural-house-2:
	php $(toolpath) \
		--name=rural-house-2 \
		--map=raw-assets/objects/rural-house-2.tmj \
		--output-folder=./assets/objects \
		--format=asm \
		--add-dimensions

rundown-house-1:
	php $(toolpath) \
		--name=rundown-house-1 \
		--map=raw-assets/objects/rundown-house-1.tmj \
		--output-folder=./assets/objects \
		--format=asm \
		--add-dimensions

rundown-house-2:
	php $(toolpath) \
		--name=rundown-house-2 \
		--map=raw-assets/objects/rundown-house-2.tmj \
		--output-folder=./assets/objects \
		--format=asm \
		--add-dimensions

posh-house:
	php $(toolpath) \
		--name=posh-house \
		--map=raw-assets/objects/posh-house.tmj \
		--output-folder=./assets/objects \
		--format=asm \
		--add-dimensions

factory:
	php $(toolpath) \
		--name=factory \
		--map=raw-assets/objects/factory.tmj \
		--output-folder=./assets/objects \
		--format=asm \
		--add-dimensions

castle:
	php $(toolpath) \
		--name=castle \
		--map=raw-assets/objects/castle.tmj \
		--output-folder=./assets/objects \
		--format=asm \
		--add-dimensions

buck-house:
	php $(toolpath) \
		--name=buck-house \
		--map=raw-assets/objects/buck-house.tmj \
		--output-folder=./assets/objects \
		--format=asm \
		--add-dimensions

road-1:
	php $(toolpath) \
		--name=road-1 --map=raw-assets/objects/road-1.tmj \
		--output-folder=./assets/objects \
		--format=asm \
		--compression=rle \
		--add-dimensions

road-2:
	php $(toolpath) \
		--name=road-2 --map=raw-assets/objects/road-2.tmj \
		--output-folder=./assets/objects \
		--format=asm \
		--compression=rle \
		--add-dimensions

road-3:
	php $(toolpath) \
		--name=road-3 --map=raw-assets/objects/road-3.tmj \
		--output-folder=./assets/objects \
		--format=asm \
		--compression=rle \
		--add-dimensions

phone-box:
	php $(toolpath) \
		--name=phone-box \
		--map=raw-assets/objects/phone-box.tmj \
		--output-folder=./assets/objects \
		--format=asm \
		--add-dimensions

tree-1:
	php $(toolpath) \
		--name=tree-1 \
		--map=raw-assets/objects/tree-1.tmj \
		--output-folder=./assets/objects \
		--format=asm \
		--add-dimensions

bush-1:
	php $(toolpath) \
		--name=bush-1 \
		--map=raw-assets/objects/bush-1.tmj \
		--output-folder=./assets/objects \
		--format=asm \
		--add-dimensions

bush-2:
	php $(toolpath) \
		--name=bush-2 \
		--map=raw-assets/objects/bush-2.tmj \
		--output-folder=./assets/objects \
		--format=asm \
		--add-dimensions

bush-3:
	php $(toolpath) \
		--name=bush-3 \
		--map=raw-assets/objects/bush-3.tmj \
		--output-folder=./assets/objects \
		--format=asm \
		--add-dimensions

shop-1:
	php $(toolpath) \
		--name=shop-1 \
		--map=raw-assets/objects/shop-1.tmj \
		--output-folder=./assets/objects \
		--format=asm \
		--add-dimensions

shop-2:
	php $(toolpath) \
		--name=shop-2 \
		--map=raw-assets/objects/shop-2.tmj \
		--output-folder=./assets/objects \
		--format=asm \
		--add-dimensions

pub:
	php $(toolpath) \
		--name=pub \
		--map=raw-assets/objects/pub.tmj \
		--output-folder=./assets/objects \
		--format=asm \
		--add-dimensions

pub-sign-1:
	php $(toolpath) \
		--name=pub-sign-1 \
		--map=raw-assets/objects/pub-sign-1.tmj \
		--output-folder=./assets/objects \
		--format=asm \
		--add-dimensions

pub-sign-2:
	php $(toolpath) \
		--name=pub-sign-2 \
		--map=raw-assets/objects/pub-sign-2.tmj \
		--output-folder=./assets/objects \
		--format=asm \
		--add-dimensions

sign:
	php $(toolpath) \
		--name=sign \
		--map=raw-assets/objects/sign.tmj \
		--output-folder=./assets/objects \
		--format=asm \
		--add-dimensions

town-cross:
	php $(toolpath) \
		--name=town-cross \
		--map=raw-assets/objects/town-cross.tmj \
		--output-folder=./assets/objects \
		--format=asm \
		--add-dimensions

pavement:
	php $(toolpath) \
		--name=pavement \
		--map=raw-assets/objects/pavement.tmj \
		--output-folder=./assets/objects \
		--format=asm \
		--add-dimensions

# generate sprites
sprites: saucer-sprite brush-sprite van-sprite player-sprite ball-sprite bubble-sprite \
	wasp-sprite moon-sprite face-sprite face2-sprite saucer-small-sprite ghost-sprite \
	cloud-sprite player-bike

streetlamp:
	php $(toolpath) \
		--name=streetlamp \
		--map=raw-assets/objects/streetlamp.tmj \
		--output-folder=./assets/objects \
		--format=asm \
		--add-dimensions

player-sprite:
	php $(toolpath) \
	--name=player \
	--sprite=raw-assets/sprites/smudge.gif \
	--mask=raw-assets/sprites/smudge-mask.gif \
	--output-folder=./assets/sprites \
	--format=asm

player-bike:
	php $(toolpath) \
		--name=player-bike \
		--sprite=raw-assets/sprites/smudge-cycling.gif \
		--mask=raw-assets/sprites/smudge-cycling-mask.gif \
		--output-folder=./assets/sprites \
		--format=asm

saucer-sprite:
	php $(toolpath) \
		--name=saucer \
		--sprite=raw-assets/sprites/flying-saucer.gif \
		--output-folder=./assets/sprites \
		--format=asm

brush-sprite:
	php $(toolpath) \
		--name=brush \
		--sprite=raw-assets/sprites/brush.gif \
		--output-folder=./assets/sprites \
		--format=asm

van-sprite:
	php $(toolpath) --name=van \
	--sprite=raw-assets/sprites/van.gif \
	--output-folder=./assets/sprites \
	--format=asm

cloud-sprite:
	php $(toolpath) \
		--name=cloud --sprite=raw-assets/sprites/cloud.gif \
		--output-folder=./assets/sprites \
		--format=asm

ball-sprite:
	php $(toolpath) \
		--name=ball \
		--sprite=raw-assets/sprites/ball-small.gif \
		--mask=raw-assets/sprites/ball-small-mask.gif \
		--output-folder=./assets/sprites \
		--format=asm

bubble-sprite:
	php $(toolpath) \
		--name=bubble \
		--sprite=raw-assets/sprites/bubble.gif \
		--mask=raw-assets/sprites/bubble-mask.gif \
		--output-folder=./assets/sprites \
		--format=asm

wasp-sprite:
	php $(toolpath) \
		--name=wasp \
		--sprite=raw-assets/sprites/wasp.gif \
		--output-folder=./assets/sprites \
		--format=asm

moon-sprite:
	php $(toolpath) \
		--name=moon-small \
		--sprite=raw-assets/sprites/moon-small.gif \
		--output-folder=./assets/sprites \
		--format=asm

face-sprite:
	php $(toolpath) \
		--name=face \
		--sprite=raw-assets/sprites/face.gif \
		--output-folder=./assets/sprites \
		--format=asm

face2-sprite:
	php $(toolpath) \
		--name=face-2 \
		--sprite=raw-assets/sprites/face2.gif \
		--output-folder=./assets/sprites \
		--format=asm

saucer-small-sprite:
	php $(toolpath) \
		--name=saucer-small \
		--sprite=raw-assets/sprites/saucer-small.gif \
		--output-folder=./assets/sprites \
		--format=asm

ghost-sprite:
	php $(toolpath) \
		--name=ghost-small \
		--sprite=raw-assets/sprites/ghost-small.gif \
		--output-folder=./assets/sprites \
		--format=asm
	
# generate screens
screen-object-maps:
	php $(toolpath) \
		--replace-flash-with-solid \
		--map=raw-assets/screens/screens.tmj \
		--object-types=raw-assets/objects/objecttypes.xml \
		--output-folder=assets/screens \
		--layer-type=objectgroup \
		--format=asm

tileset:
	php $(toolpath) \
		--name=tiles \
		--replace-flash-with-solid \
		--tileset=raw-assets/tileset/tileset.tsj \
		--graphics=raw-assets/tileset/tiles-bw.gif \
		--output-folder=./assets/screens \
		--format=asm

# generate user-interface stuff
user-interface: font menu-title status-bar title-bar title

font:
	php $(toolpath) \
		--name=font \
		--graphics=raw-assets/interface/font.gif \
		--output-folder=./assets/interface \
		--format=asm

title:
	php $(toolpath) \
		--name=title \
		--sprite=raw-assets/interface/title.gif \
		--output-folder=./assets/interface \
		--format=asm

menu-title:
	php $(toolpath) \
		--name=menu-title \
		--map=raw-assets/interface/menu-title.tmj \
		--output-folder=./assets/interface \
		--format=asm

status-bar:
	php $(toolpath) \
		--name=status-bar \
		--map=raw-assets/interface/status-bar.tmj \
		--output-folder=./assets/interface \
		--format=asm

title-bar:
	php $(toolpath) \
		--name=title-bar \
		--map=raw-assets/interface/title-bar.tmj \
		--output-folder=./assets/interface \
		--add-dimensions \
		--format=asm

# compile the app

compile:
	zcc +zx -v \
		-startup=31 \
		-DWFRAMES=3 \
		-clib=sdcc_iy \
		-SO3 \
		--max-allocs-per-node200000 \
		@zproject.lst \
		-pragma-include:zpragma.inc \
		-o o/smudge \
		-m \
		-create-app

loader.tap:
	tools/bas2tap -a=10 loader.bas o/loader.tap

smudge.tap:
	z88dk-appmake +zx -b smudge.scr --org 16384 --noloader --blockname screen -o o/screen.tap
	z88dk-appmake +zx -b o/smudge --noloader --blockname code -o o/code.tap
	cat o/loader.tap o/screen.tap o/code.tap > o/Smudge-Bad-Moonee-Rising.tap

tape: loader.tap smudge.tap

build: compile tape

generate: tileset sprites user-interface objects screen-object-maps

run:
	open o/Smudge-Bad-Moonee-Rising.tap

play: build run

all: generate build run

clean:
	-rm assets/sprites/*
	-rm assets/objects/*
	-rm assets/interface/*
	-rm assets/screens/*
	-rm o/*
