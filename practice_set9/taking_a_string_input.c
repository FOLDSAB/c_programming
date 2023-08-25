#include <stdio.h>

int main()
{
    char str[50], str2[32];
    // printf("Enter a word to print: ");
    scanf("%s", str);
    // know that scan f is used to take only one word as input.
    getchar( );
    printf("%s", str);
    printf("Enter any thing to print because this time gets is used : ");
    gets(str2);
    puts(str2);
    return 0;
}