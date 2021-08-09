#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;
    while ((ch = fgetc(fp)) != EOF)
        printf("%c", ch);
}