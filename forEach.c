#include <stdio.h>
#include <stdlib.h>

//=============================linked List==============================//
struct node{
	void* data;
	struct node* next;
};

void set_int_value(struct node* node, int val){
	int* i = malloc(sizeof (int));
	*i = val;
	node->data = i;
}

struct node* create_basic_list(){
	int node_size = sizeof (struct node);
	
	struct node* element1 = malloc(node_size);
	struct node* element2 = malloc(node_size);
	struct node* element3 = malloc(node_size);
	
	element1->next = element2;
	element2->next = element3;
	element3->next = NULL;
	
	set_int_value(element1, 1);
	set_int_value(element2, 2);
	set_int_value(element3, 3);
	
	return element1;
}

//=====================================forEach======================================// 

void forEach(struct node* head, void(*fun)(void*)){
	struct node* current = head;
	while(current){
		fun(current->data);
		current = current->next;
	}	
}	

void print_int(void* val){
	printf("%d\n", *((int*)val));
}

void print(struct node* head){
	forEach(head, print_int); 
}

int main(void){
	struct node* list = create_basic_list();
	print(list);	
}