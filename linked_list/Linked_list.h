#ifndef LIST_H
#define LIST_H

typedef struct node {
  void* data;
  struct node* next;
} Node;

typedef struct list {
  Node* head;
} List;

List* create();
int insert(List*,void*);
void print_list(List*);
Node* get_new_node(void*);
void insert_after(List*,void*,void*);
void remove_node(List* ,void*);
int search(List*,int);
int get_length_of(List*);

#endif //LIST_H
