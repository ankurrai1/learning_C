// swaping two number provided by command line without using temporary variable
#include<stdio.h>
#include<conio.h>

int main()
{
    int a, b;
    printf("Enter first number for swap A : ");
    scanf("%d", &a);

    printf("Enter second number for swap B : ");
    scanf("%d", &b);
    printf("you entered A : %d and B : %d \n", a ,b);

    a = a + b;
    b = a - b;
    a = a -b;
    
    printf("after swap A : %d and B : %d \n", a ,b);

    return 0;
}
