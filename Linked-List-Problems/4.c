#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *next;
};

int pull(struct node **head)
{
	struct node **current = head;
	int a = 0;

	if (*head != NULL) {
		a  = (**head).data;  /* taking data stored in the particular list */
//		printf("%d\n", a);   /* to check the obtained value from the list */
		free(*head);
		*head = (*head)->next; /* or :  *head = (**head).next; this is also true */
		return a;
	}
	else
		printf("Unable to process !\n");
}
		
void display(struct node *head)
{
	printf("%d\n", head->data);

	if (head->next != NULL)
		display(head->next);
}

main()
{
	struct node *head = malloc(sizeof(struct node));

	head = BuildOneTwoThree();

	int a = pull(&head);
	display(head);
	printf("\na = %d\n", a);
	
	int b = pull(&head);
	printf("b = %d\n", b);
	display(head);
}
