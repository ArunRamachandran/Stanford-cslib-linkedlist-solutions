#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *next;
};

struct node *build()
{
	struct node *second = NULL;
	struct node *third  = NULL;

	second = malloc(sizeof(struct node));
	third  = malloc(sizeof(struct node));

	second->data = 2;
	second->next = third;

	third->data = 3;
	third->next = NULL;

	return second;
}

struct node *push(struct node *head, int dat)
{
	struct node *p;

	p = malloc(sizeof(struct node));

	p->data = dat;
	p->next = head;

	return p;
}
print(struct node *head)
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

	head = build();

	head = push(head, 1);

	print(head);

	return 0;
}
