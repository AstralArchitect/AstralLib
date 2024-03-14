#include <stdio.h>
#include "libWin.c"

int main() {
    typedPrint("\nCeci est une demo de AstralLib.\n", "\033[0;37m", 70);
    Sleep(500);
    typedPrintNoReturn("Grace a elle on peut ", "\033[0;37m", 70);
    typedPrint("changer de couleur!!!", "\033[0;32m", 70);
    Sleep(1000);
    typedPrintNoReturn("Il en existe differentes tel que : ", "\033[0;37m", 70);
    Sleep(500);
    typedPrintNoReturn("Rouge, ", "\033[0;31m", 70);
    Sleep(500);
    typedPrintNoReturn("Vert, ", "\033[0;32m", 70);
    Sleep(500);
    typedPrintNoReturn("Jaune, ", "\033[0;33m", 70);
    Sleep(500);
    typedPrintNoReturn("Bleu, ", "\033[0;34m", 70);
    Sleep(500);
    typedPrintNoReturn("Violet", "\033[0;35m", 70);
    Sleep(500);
    typedPrintNoReturn(" et ", "\033[0;37m", 70);
    Sleep(500);
    typedPrint("Bleu Claire.\n", "\033[0;36m", 70);
    Sleep(2000);
    typedPrint("On peut aussi changer la vitesse! ", "\033[0;37m", 70);
    typedPrintNoReturn("Voici un exemple:", "\033[0;37m", 70);
    Sleep(1000);
    typedPrintNoReturn("de lente, ", "\033[0;37m", 200);
    Sleep(1000);
    typedPrintNoReturn("en passant par moyen, ", "\033[0;37m", 70);
    Sleep(500);
    typedPrint("a rapide !\n", "\033[0;37m", 20);
    Sleep(2000);
    typedPrint("La demo est terminee, merci de l'avoir regarde en entier !", "\033[0;37m", 70);
    Sleep(1000);
    return 0;
}