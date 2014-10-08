#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *next;
};

void InsertNth(struct node **head, int index, int value)
{
	if (index == 0) { // if Index == 0, i.e we have to create the first node in the list
		struct node *new = malloc(sizeof(struct node));
		new->data = value;
		new->next = NULL;
		*head = new;
	}
	else { // i.e if given indx is 1/2/3..etc
		int x = 1; // to use in for loop
		for ( ; x != index; x++) {
			(*head) = (*head)->next; // moving pointer into our desired position.
		}

		if ( (*head)->next == NULL) { /*i.e there is no node is present there */
		//	printf("There is no element in the rqrd pos\n"); //enable this line to verify the if condition
			struct node *indx = malloc(sizeof(struct node));
			indx->data = value;
			indx->next = NULL;
			(*head)->next = indx;
		//	printf("%d\n", (*head)->data);/* Enable this line to check the present node status */
		}
		else { /* if another node is present there... */
			struct node *indx = malloc(sizeof(struct node));	
			struct node *current = (*head)->next; // just keeping the prsent node pos. for further operations */
			indx->data = value;
			(*head)->next = indx;
			indx->next = current;
			//current->next = NULL;
	
		}
	}


}

void Display(struct node *head)
{
	printf("%d\n", head->data);
	if (head->next != NULL)
		Display(head->next);
	else
		return;
}

main()
{
	struct node *head = NULL;

	InsertNth(&head, 0, 13);//Gen.Form is : InsertNth(&head, Index, Data)
	InsertNth(&head, 1, 45);
	InsertNth(&head, 1, 699);
	InsertNth(&head, 1, 99);
	Display(head);
}
