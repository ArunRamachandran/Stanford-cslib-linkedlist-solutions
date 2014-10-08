#include<stdio.h>
#include<stdlib.h>

#define FALSE 0
#define TRUE 1

struct node {
	int data;
	struct node *next;
};
/*
struct node *Build()
{
	struct node *head = malloc(sizeof(struct node));
	struct node *second = malloc(sizeof(struct node));
	struct node *third = malloc(sizeof(struct node));

	head->data = 1;
	head->next = second;

	second->data = 5;
	second->next = third;

	third->data = 10;
	third->next = NULL;

	return head;
}
*/
void SortedInsert(struct node **head, struct node *new)
{
	int condition = FALSE;
	struct node *current = NULL;

	while( ((*head) != NULL) && (condition == FALSE) ) {
		if ( ((*head)->data) < (new->data)) { //i.e if values in the nodes are smaller than the new node value, then fwd the pointer
			current = (*head); // keeping present value into current
			(*head) = (*head)->next;
		}
		else 
			condition = TRUE;
	}

	new->next = current->next;
	current->next = new;
}		
/*		
void Display(struct node *head)
{
	printf("%d\n", head->data);
		if (head->next != NULL)
			Display(head->next);
		else {
			printf("In last node");
			return;
		}
}



main()
{
	struct node *head = NULL;
	struct node *temp = NULL;
	
	head = Build();
	temp = head;

	struct node *new = malloc(sizeof(struct node));
	new->data = 25;
	new->next = NULL;

	SortedInsert(&head, new);
	Display(temp);
}
*/
