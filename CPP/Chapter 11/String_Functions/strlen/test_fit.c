/* test_fit.c -- try the string-shrinking functin */
#include <stdio.h>
#include <string.h> /* contains string function prototypes */
#include "fit.h"

int main(void)
{
    char mesg[] = "Things should be as simple as possible,"
        "but not simpler.";

    puts(mesg);
    fit (mesg, 38);
    puts(mesg);
    puts("Let's look at some more of the string.");
    puts(mesg + 39);

    return 0;
}
