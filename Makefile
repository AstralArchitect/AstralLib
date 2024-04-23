all:
	gcc -c lib/AstralLib.c -fPIC ; gcc -shared -o bin/AstralLib.dll AstralLib.o ; gcc exemple/main.c -lAstrallib -L ./bin -o bin/exemple ; bin/exemple
clean:
	rm bin/* Astrallib.o
