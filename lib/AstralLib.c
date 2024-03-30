#include <stdio.h>

#ifdef _WIN32

#include <windows.h>

void sleep_ms(DWORD milliseconds) {
    Sleep(milliseconds);
}

#elif _WIN64

#include <windows.h>

void sleep_ms(DWORD milliseconds) {
    Sleep(milliseconds);
}

#else

#include <time.h>

void sleep_ms(unsigned long milliseconds) {
    struct timespec ts;

    ts.tv_sec = milliseconds / 1000;
    ts.tv_nsec = (milliseconds % 1000) * 1000000;

    nanosleep(&ts, NULL);
}
#endif

#include <string.h>
#include <stdio.h>

void typedPrint(char *text, char *color, int speed) {
    printf("%s", color);
    for(int i = 0; i < strlen(text); i++){
        printf("%c", text[i]);

        // Nécessaire pour que l'effet marche sous Linux
        fflush(stdout);

        sleep_ms(speed);
    }
    //printf("\n");
}