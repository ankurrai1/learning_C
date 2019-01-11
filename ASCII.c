// here basecally  we type cast the value into integer so that we can find ascii of that char
#include<stdio.h>

int main()
{
    char character;
    int ascii_equvalant;
    printf("enter the character to find ascii value : ");
    scanf("%c",&character);

    ascii_equvalant = (int)character;

    printf("ASCII equvalant of given charater is : %d",ascii_equvalant);

    return 0;
}

