#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *next;
};

void print(struct node *head)
{
	printf("%d\n", head->data);

	if ((head) != NULL)
		print(head->next);
	else
		return;
}
