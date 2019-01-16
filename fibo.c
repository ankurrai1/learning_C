// function to print fibonacci series upto given term;
#include<stdio.h>

void print_fibo(int);

int main()
{
    int term;
    printf("Enter  no of term to find fibonacci upto : ");
    scanf("%d",&term);
    print_fibo(term);
    return 0;
}

void print_fibo(int term){
    int temp, first_term = 0, second_term = 1;
    
    while(term > 0){
        printf("\t %d \t", first_term);
        temp = first_term;
        first_term = second_term;
        second_term =  temp + second_term;
        term--;
    }
    
}