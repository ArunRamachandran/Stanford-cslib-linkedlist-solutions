#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *next;
};

void Push(struct node **head, int dat)
{
	struct node *new = malloc(sizeof(struct node));

	new->data = dat;
	new->next = *head;

	*head = new;
}

struct node *AddAtHead()
{
	struct node *head = NULL;
	int i;

	for (i = 1; i < 6; i++)
		Push(&head, i);

//HEAD == {5, 4, 3, 2, 1};

	return (head);
}

main()
{
	struct node *head = malloc(sizeof(struct node));
	int x;

	head = AddAtHead();

	x = count(head);

	printf("Count : %d\n", x);

	print(head);
}
