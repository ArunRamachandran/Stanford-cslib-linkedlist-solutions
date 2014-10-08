#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *next;
};

int count(struct node *head)
{
	int co = 0;
	struct node *current = head;

	while (current != NULL) {
		++co;
		current = current->next;
	}

	return co;
}

/*struct node *build()
{
	struct node *head = malloc(sizeof(struct node));
	struct node *second = malloc(sizeof(struct node));
	struct node *third = malloc(sizeof(struct node));

	head->data = 1;
	head->next = second;

	second->data = 2;
	second->next = third;

	third->data = 3;
	third->next = NULL;

	return head;
}		

main()
{
	struct node *head = NULL;
	int c;

	head = build();
	c = count(head);
	
	printf("%d\n", c);
	
}*/
