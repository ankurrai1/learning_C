#include <stdio.h>
#include "linked_list_lib.h"

int main() {
  char alphabet='a';
  int number=56;
  
  List* list=create();
  push(list,&number);
  int list_length=push(list,&alphabet);
  
  printf("%d\n",list_length);
  int* first_data = (int*)get_first_element(list);
  
  printf("%p\n",first_data);
  printf("%d\n",*first_data);
  
  int* last_data = (int*)get_last_element(list);
  printf("%c\n",*last_data);
  
  return 0;
}
