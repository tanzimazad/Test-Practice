#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[]="01212";
    char str1[]="012";
    printf("%d",strspn(str,str1));
    printf("Hello world!\n");
    return 0;
}
