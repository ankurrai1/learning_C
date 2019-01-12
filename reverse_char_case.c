#include<stdio.h>
#include<ctype.h>

int main()
{
    char entered_char, revers_char;
    printf("\n Enter a alphabet to get its revers case \n");
    entered_char = getchar();
    
    printf("\n Reverse of  given character is ");

    if (islower(entered_char)){
       putchar(toupper(entered_char));
    }
    else{
        putchar(tolower(entered_char));
    }
    return 0;
}
