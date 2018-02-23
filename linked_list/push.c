#include <stdlib.h>
#include "linked_list_lib.h"

int push(List* list, void* data) {
  Node* node = malloc(sizeof(Node));
  node->data = data;
  node->next = NULL;
  if (list->head == NULL) {
    list->head = node;
    return ++list->length;
  }
  Node* current_node=list->head;
  while (current_node->next!=NULL) {
    current_node=current_node->next;
  }
  current_node->next=node;
  return ++list->length;
}