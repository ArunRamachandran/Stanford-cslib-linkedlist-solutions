#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *next;
};

int count; // to store the no.of nodes in created list

struct node *Build()
{
	struct node *head = malloc(sizeof(struct node));
	struct node *second =  malloc(sizeof(struct node));
	struct node *third  =  malloc(sizeof(struct node));

	head->data = 1;
	head->next = second;

	second->data = 2;
	second->next = third;

	third->data = 3;
	third->next = NULL;

	return head;
}

void len(struct node *head)
{
	struct node *current = malloc(sizeof(struct node));
	current = head;

	while (current != NULL) {
		count++;
		current = current->next;
	}
	
	
}

void DeleteList(struct node **head)
{
// better use a refernce pointer to head, use struct node **current = head, instead directly deleting each nodes
// see 3.c
	if ((*head)->next != NULL) //check this line to understand processing of ** elements.
		DeleteList(&((*head)->next));

	free(*head);
//	printf("%d\n", (*head)->data); For testing purpose

}
main()
{
	struct node *head = malloc(sizeof(struct node));
	head = Build(); // {1,2,3}
	len(head);
	DeleteList(&head);
}
	
