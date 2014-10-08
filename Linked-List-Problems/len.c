#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *next;
};

int len(struct node *head)
{
	int l = 0;

	while (head != NULL) {
		l++;
		head = head->next;
	}
	return l;
}

main() 
{
	struct node *head = malloc(sizeof(struct node));
	struct node *second = malloc(sizeof(struct node));
	
	head->data = 1;
	head->next = second;

	second->data = 2;
	second->next = NULL;

	int l = len(head);
	printf("len. = %d\n", l);
}
