// a function to find factoril of a given integer using loops
#include<stdio.h>
int main()
{
    int num, temp;
    long long factorial = 1;
    printf("Enter a number to find factorial : ");
    scanf("%d",&num);
    temp = num;
    for(int index = 0; index < num; index++)
    {
        factorial *= temp;
        temp--;
    }
    printf("factorial of %d is : %lld", num, factorial);
    return 0;
}