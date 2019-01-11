// basic use of switch in c language
#include<stdio.h>

int main()
{
    char grade;
    printf("grades\n A\n B\n C\n D\n F\n");
    printf("Enter your garde to know your level :");
    scanf("%c",&grade);
    
    switch (grade)
    {
        case 'A':
            printf("your gardes are Excellent");
            break;
        case 'B':
            printf("your gardes are GOOD");
            break;
        case 'C':
            printf("your gardes are satisfactory you have to work more");
            break;
        case 'D':
            printf("you have to work hard you just passsed ");
            break;
        case 'F':
            printf("sorry you are FAIL better luck next time");
            break;
        default:
           printf("invalid grade entered");
            break;
    }
    printf("\n\n you enterd grade %c ", grade);
    return 0;
}
