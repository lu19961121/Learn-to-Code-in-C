/* quit_chk.c -- beginning of some program */
#include <stdio.h>
#include <string.h>

#include "s_gets.h"

#define SIZE 80
#define LIM 10
#define STOP "quit"

int main(void)
{
    char input[LIM][SIZE];
    int ct = 0;

    printf("Enter up to %d lines (type quit to quit):\n", LIM);
    // terminated by entering an empty line
    /* while (ct < LIM && s_gets(input[ct], SIZE) != NULL
                    && input[ct][0] != '\0') */
    while (ct < LIM && s_gets(input[ct], SIZE) != NULL 
                    && strcmp(input[ct], STOP) != 0)
            ct++;
    printf("%d strings entered\n", ct);

    return 0;
}
