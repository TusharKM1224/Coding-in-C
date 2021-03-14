#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char a;
    char b[20], c[20], d[20];

    printf("enter the character:\n");
    scanf("%c", &a);
    printf("character::%c\n", a);
    printf("enter the string:\n");
    scanf("%s", b);
    printf("string::%s\n", b);
    printf("enter the line :\n");
    scanf("\n");
    scanf("%[^\n]%c", c);
    scanf("%s", d);
    printf("\n");
    printf("line::%s", c);
    return 0;
}