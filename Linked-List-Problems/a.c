#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *next;
};

struct node *push(struct node *new, int dat)
{
	struct node *head;
	
	head = malloc(sizeof(struct node));

	head->data = dat;
	head->next = new;

	new = head;
	
	return new;
}

void print(struct node *head)
{

	if (head->next != NULL)
		print(head->next);

	printf("%d\n", head->data);

}
main()
{
	struct node *head;
	int x;

	head = malloc(sizeof(struct node));

	head = push(head, 1);
	head = push(head, 2);
	head = push(head, 3);
	
	x = count(head);
	printf("%d\n", x);

	print(head);
}
	
