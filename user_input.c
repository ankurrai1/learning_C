#include<stdio.h>

int main(){
    // various type of variabls declaration
    int num1, num2;
    char character;
    float fraction;

    printf("enter two numbers \n");
    scanf("%d %d",&num1,&num2);

    printf("\nEnter a Character\n");
    // scanf("%c",&character);
    scanf(" %c",&character);

    printf("Enter a fractional number \n");
    scanf("%f",&fraction);

    printf("entered num1 is : %d and second is : %d \n", num1, num2);
    printf("entered character is : %c\n", character);
    printf("entered fractional number is : %f\n", fraction);

    return 0;
}