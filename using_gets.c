//gets() is used to take a single input at a time but can be used to input a complete sentence with spaces unlike scanf().
#include<stdio.h>
int main()
{
    char str[50];   // char array of size 50
    printf("Enter your complete name:\n\n\n");

    gets(str);
    printf("\n\n thank you  %s\n\n\n", str);

    return 0;
}
