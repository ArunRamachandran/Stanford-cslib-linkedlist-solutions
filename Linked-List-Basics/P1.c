/* 
attempt to insert a new node to the front of
an existing list 
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *next;
};

struct node *build();
void push(struct node *, int);
void print_headx(struct node *);

main()
{
	struct node *head;
	head = build();
	
	push(head, 1);
	
	print_headx(head);

}

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

void push(struct node *head, int x)
{
	struct node *newnode = NULL;
	
	newnode = malloc(sizeof(struct node));
	newnode->data = x;
	newnode->next = head;

	head = newnode;

	//return head;
}

void print_headx(struct node *head)
{
	printf("%d\n", head->data);
		if (head->next != NULL)
			print_headx(head->next);
		else
			return;
}
