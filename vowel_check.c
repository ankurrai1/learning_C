#include<stdio.h>
#include<ctype.h>

int main()
{

    char ch;
    printf("Input a Character :  ");
    scanf("%c", &ch);

    switch(tolower(ch))
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            
            printf("\n\n%c is a vowel.\n\n", ch);
            break;
            
        default:
            
            printf("%c is not a vowel.\n\n", ch);
    }
    
    return 0;
}
