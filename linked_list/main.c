#include <stdio.h>
#include "Linked_list.h"

int main() {
  char alphabet = 'a';
  
  int first_number = 56;
  int second_number = 26;
  int third_number = 20;
  int fouth_number = 64;
  
  List* list=create();
  
  insert(list,&alphabet);
  
  insert(list,&first_number);
  insert(list,&fouth_number);
  insert(list,&second_number);
  insert_after(list,&fouth_number,&third_number);
  
  print_list(list);
  
  if (search(list,20)) {
    printf("number is there \n");
  } else {
    printf("ERROR because number is there\n");
  }
  printf("before removing element length is %d\n",get_length_of(list));
  
  remove_node(list,&third_number);
  
  printf("after removing element length is %d\n",get_length_of(list));  
  print_list(list);
  return 0;
}
