#include <windows.h>
#include <string.h>

void typedPrint(char text[1000], char color[11], int speed) {
    printf("%s", color);
    for(int i = 0; i < strlen(text); i++){
        printf("%c", text[i]);
        Sleep(speed);
    }
    printf("\n");
    printf("\033[0;37m");
}

void typedPrintNoReturn(char text[1000], char color[11], int speed) {
    printf("%s", color);
    for(int i = 0; i < strlen(text); i++){
        printf("%c", text[i]);
        Sleep(speed);
    }
    printf("\033[0;37m");
}