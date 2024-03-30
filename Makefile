all:
	gcc -c lib/AstralLib.c ; gcc -shared -o bin/AstralLib.dll AstralLib.o ; gcc exemple/main.c -lAstrallib -L ./ -o bin/exemple ; bin/exemple