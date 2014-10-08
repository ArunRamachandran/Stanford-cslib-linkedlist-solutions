#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *next;
};

void Display(struct node *head)
{
	printf("%d\n", head->data);

	if (head->next != NULL)
		Display(head->next);
}
