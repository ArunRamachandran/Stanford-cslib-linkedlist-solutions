#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *next;
};

void push2(struct node **head, int dat)
{
	struct node *p = NULL;

	p = malloc(sizeof(struct node));

	p->data = dat;
	p->next = *head;

	*head   = p;
}

void print(struct node *head)
{
	printf("%d\n", head->data);
	if (head->next != NULL)	
		print(head->next);
	else
		return;
}

main()
{
	struct node *head = NULL;

	push2(&head, 1);
	push2(&head, 2);
	push2(&head, 3);

	print(head);
}

	
