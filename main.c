#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
bool is(char pal[]);

int main()
{
    char pal[]="";
    puts("***Program to test palendromes***");
    printf("Type in word or number:\n");
    scanf("%s", &pal);

    if (is(pal))
        printf("%s\n: is a palindrome",pal);
    else
        printf("%s: is not a palindrome\n",pal);
    return 0;
}
bool is(char pal[])
{
    int len=strlen(pal);
    int mid=strlen(pal)/2;

    for(int i=0; i<mid; i++)
        if(pal[i]!=pal[len-i-1])
            return false;
    return true;
}
