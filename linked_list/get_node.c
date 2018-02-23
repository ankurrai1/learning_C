#include <stdio.h>
#include <stdlib.h>
#include "linked_list_lib.h"

void* get_first_element(List* list) {
  return list->head->data;
}

void* get_last_element(List* list) {
  Node* current_node=list->head;
  while (current_node->next != NULL) {
    current_node=current_node->next;
  }
  return current_node->data;
}


