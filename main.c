#include <stdio.h>

int main(int argc, char const *argv[])
{
    char ch[10240];
    FILE *fp;
    fp = fopen("swpnum.tex","rw");
    while (fgets(ch,10240,fp) != NULL)
    {
        printf("%s",ch);        
    }
    
    
    return 0;
}
