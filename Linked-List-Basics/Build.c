#include<string.h>
#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *next;
};

/* Build the list {1,2,3} in the heap and store
its header point in the local stack variable.
Which returns the head pointer to the caller
*/
struct node* BuildOneTwoThree() {
	struct node* head = NULL;
	struct node* second = NULL;
	struct node* third = NULL;

	head = malloc(sizeof(struct node)); // allocate 3 nodes in the heap
	second = malloc(sizeof(struct node));
	third = malloc(sizeof(struct node));

	head->data = 1;
	head->next = second;

	second->data = 2;
	second->next = third;

	third->data = 3;
	third->next = NULL;

	return head;
}
	

