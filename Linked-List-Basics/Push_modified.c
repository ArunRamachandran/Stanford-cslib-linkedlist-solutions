#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *next;
};

void push_modified(struct node** headRef, int data)
{
	struct node *newNode = malloc(sizeof(struct node));

	newNode->data = data;
	newNode->next = *headRef;// to derefernce back to the real head

	*headRef = newNode;
}

struct node *build()
{
	struct node *second = NULL;
	struct node *third  = NULL;

	second = malloc(sizeof (struct node));
	third  = malloc(sizeof (struct node));
	
	second->data = 2;
	second->next = third;

	third->data = 3;
	third->next = NULL;

	return second;
}

void print_node(struct node *head)
{
	printf("%d\n", head->data);
	if (head->next != NULL)
		print_node(head->next);
	else
		return;
}

main()
{
	struct node *head;
	
	head = build();
	push_modified(&head, 1);

	print_node(head);	

	return 0;
}
