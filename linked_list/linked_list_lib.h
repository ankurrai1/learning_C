#ifndef LIST_H
#define LIST_H

typedef struct node {
  void* data;
  struct node* next;
} Node;

typedef struct list {
  Node* head;
  int length;
} List;

List* create();
int push(List *,void*);
void* get_first_element(List*);
void* get_last_element(List*);
int is_include(List*,int);

List* create() {
  List* list = malloc(sizeof(List));
  list->head = NULL;
  list->length = 0;
  return list;
}

#endif //LIST_H
