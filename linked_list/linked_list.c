#include <stdio.h>
#include <stdlib.h>
#include "Linked_list.h"


List* create() {
  List* list = malloc(sizeof(List));
  list->head = NULL;
  return list;
}

Node* get_new_node(void* data){
  Node* node = malloc(sizeof(Node));
  node->data = data;
  node->next = NULL;
  return node;
}

int has_same_data(Node* node,void* element){
  if (*(int*)node->data == *(int*)element) {
    return 1;
  }
  return 0;
}

void print_list(List* list){
  if(list == NULL){
    printf("ERROR.... LIST IS NULL\n");
  }
  Node* node = list->head;
  if (node == NULL){
    printf("ERROR.... HEAD IS NULL\n");
  }
  while (node != NULL) {
    printf("%d\n", *(int*)node->data);
    node = node->next;
  }
}

int insert(List* list, void* data) {
  Node* node = get_new_node(data);
  if (list->head == NULL) {
    list->head = node;
    return 0;
  }
  Node* current_node=list->head;
  while (current_node->next!=NULL) {
    current_node=current_node->next;
  }
  current_node->next=node;
  return 0;
}

void insert_after(List* list,void* element,void* data){
  Node* new_node = get_new_node(data);
  Node* current_node = list->head;
  while (!has_same_data(current_node,element)) {
    current_node=current_node->next;
  }  
  Node* next_node = current_node->next;
  current_node->next = new_node;
  new_node->next = next_node;
}

void remove_node(List* list,void* element){
  Node* current_node = list->head;
  Node* previous_node;
  while (!has_same_data(current_node,element)) {
    previous_node = current_node;
    current_node = current_node->next;
  }
  previous_node->next = current_node->next;
  free(current_node);
}

int search(List* list,int element){
  Node* current = list->head;
  while (current->next != NULL){
    if (*(int*)current->data == element){
      return 1;
    }
    current = current->next;
  }
  return 0;
}

int get_length_of(List* list){
  int length=1;
  Node* current_node = list->head;
  while (current_node->next != NULL) {
    length++;
    current_node = current_node->next;
  }
  return length;
}
