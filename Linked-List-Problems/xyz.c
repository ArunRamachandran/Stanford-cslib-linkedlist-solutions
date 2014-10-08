#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *next;
};

main()
{
	struct node *head = NULL;

	struct node *new = malloc(sizeof(struct node));
	new->data = 1;
	new->next = NULL;

	head = new;

	printf("%d\n", head->data);
	
}
