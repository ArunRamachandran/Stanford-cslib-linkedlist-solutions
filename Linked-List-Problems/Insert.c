/* attempt to insert a node at the end of the existing node
using a tail pointer
*/

#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *next;
};

struct node *build()
{
	struct node *head = malloc(sizeof(struct node));
	struct node *second = malloc(sizeof(struct node));

	head->data = 1;
	head->next = second;

	second->data = 2;
	second->next = NULL;

	return head;
}

void insert(struct node **head, int dat)
{
	struct node *new = malloc(sizeof(struct node));

	new->data = dat;
	new->next = NULL;

	printf("%d\n", (*head)->data);
/*	while (*head != NULL)
		*head = (*head)->next;

	(*head)->next = new; */
}
	
main()
{
	struct node *head = malloc(sizeof(struct node));
//	struct node *current = malloc(sizeof(struct node));

	head = NULL;

//	current = head;
	head = build();

	insert(&head, 10);

	//print(current);
	
}
