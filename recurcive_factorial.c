// finding factorial of a number using recursion
#include<stdio.h>

long long factorial(int);

int main()
{
    int num;
    long long result;

    printf("enter number to find factorial : ");
    scanf("%d",&num);
    result = factorial(num);

    printf("factorial of %d is : %lld", num, result);

    return 0;
}

long long factorial(int num){
    if (num < 1)
        return 1;
    else
        return num*factorial(num -1);    
}