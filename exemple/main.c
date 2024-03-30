#include <stdio.h>
#include "../include/AstralLib.h"

int main(){
    typedPrint("Voici un exemple de AstralLib.\n", "\e[0;37m", 45);
    sleep_ms(1000);
    typedPrint("Cette librairie permet de ", "\e[0;37m", 45);
    sleep_ms(500);
    typedPrint("c", "\e[0;31m", 45);
    typedPrint("h", "\e[0;32m", 45);
    typedPrint("a", "\e[0;33m", 45);
    typedPrint("n", "\e[0;34m", 45);
    typedPrint("g", "\e[0;35m", 45);
    typedPrint("e", "\e[0;36m", 45);
    typedPrint("r", "\e[0;37m", 45);
    typedPrint(" de couleur!", "\e[0;37m", 45);
}