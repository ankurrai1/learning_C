#include <stdio.h>

long get_num();
long get_binary(long);

int main(){
  long binary,decimal_num;
  decimal_num = get_num();
  binary=get_binary(decimal_num);
  printf("Binary equivalent is %ld of %ld number;\n", binary,decimal_num);
  return 0;
}

long get_num(){
  long num;
  printf("Enter a decimal number \n");
  scanf("%ld", &num);
  return num;
}

long get_binary(long num){
  long remainder, base = 1, binary = 0;
  while (num > 0){
    remainder = num % 2;
    binary = binary + remainder * base;
    num = num / 2;
    base = base * 10;
  }
  return binary;
}
