#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *next;
};

struct node *push_trial(struct node *head, int dat)
{
	struct node *p = NULL;

	p = malloc(sizeof(struct node));

	p->data = dat;
	p->next = head;

	head = p;

	return head;
}

void print(struct node *head)
{
	printf("%d\n", head->data);

	if (head->next != NULL)
		print(head->next);

	else return;
}

main()
{
	struct node *head = NULL;
	
	head = malloc(sizeof(struct node));

	head = push_trial(head, 1);
	head = push_trial(head, 2);
	head = push_trial(head, 3);

	print(head);
}
