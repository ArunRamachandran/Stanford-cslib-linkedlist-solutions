#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *next;
};

struct node *build_a()
{
	struct node *head = malloc(sizeof(struct node));
	struct node *second = malloc(sizeof(struct node));

	head->data = 1;
	head->next = second;

	second->data = 2;
	second->next = NULL;

	return head;
}

struct node *build_b()
{
	struct node *head  = malloc(sizeof(struct node));
	struct node *second  = malloc(sizeof(struct node));

	head->data = 3;
	head->next = second;

	second->data = 4;
	second->next = NULL;

	return head;
}

void Append(struct node **a, struct node **b)
{
	while ((*a)->next != NULL) {
		(*a) = (*a)->next;
	}

	(*a)->next = (*b);
	(*b) = NULL;
}

main()
{
	struct node *a = NULL;
	struct node *b = NULL;

	struct node *copy_a;

	a = build_a();
	b = build_b();

	copy_a = a;

	int len_a = 0;
	int len_b = 0;

	Append(&a, &b);
	Display(copy_a);
	
}
