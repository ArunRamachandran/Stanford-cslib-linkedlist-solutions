#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *next;
};

struct node *newnode(int dat)
{
	struct node *new = NULL;

	new = malloc(sizeof(struct node));

	new->data = dat;
	new->next = NULL;

	return new;
}

print(struct node *head)
{
	printf("%d\n", head->data);
	
	if (head->next != NULL)
		print(head->next);
	else return;
}

struct node *append(struct node *head, struct node *new)
{
	if (head == NULL)
		return new;
	else {
		head->next = append(head->next, new);
		return head;
	}
}

main()
{
	struct node *head = NULL;

	head = append(head, newnode(1));
	head = append(head, newnode(2));
	head = append(head, newnode(3));
	
	print(head);

	return 0;
}	
