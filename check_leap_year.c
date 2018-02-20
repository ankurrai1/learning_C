#include <stdio.h>

void check_leap_year(int);
void show_leap_year(int);
void show_not_leap_year(int);

int main(){
  int year;
  printf("Enter a year: ");
  scanf("%d",&year);
  check_leap_year(year);
  return 0;
}

void check_leap_year(int year){
  if(year%4 == 0){
    if( year%100 == 0){
      if ( year%400 == 0)
      show_leap_year(year);
      else
      show_not_leap_year(year);
    }
    else
    show_leap_year(year);
  }
  else
  show_not_leap_year(year);
}

void show_leap_year(int year){
  printf("%d is a leap year.\n", year);
}

void show_not_leap_year(int year){
  printf("%d is not a leap year.\n", year);
}

