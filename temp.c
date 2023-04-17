#include <stdio.h>
#include <string.h>
#include "makefile.h"
int main(int argc, char const *argv[])
{
    FILE *fp;
    fp = fopen("out.tex","w");
    char string[1024000];
    maketext(string,"Programming in c","Vijay Satheesh","Abstract");
    printf("String after using sprintf(): %s", string); // modified string
    fputs(string,fp);
    return 0;
}
