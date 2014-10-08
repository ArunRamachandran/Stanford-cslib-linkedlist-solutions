#include<stdio.h>
#include<string.h>
#include<stdlib.h>


struct node {
	int data;
	struct node *next;
};

int count;

struct node *Build()
{
	struct node *head = malloc(sizeof(struct node));
	struct node *second = malloc(sizeof(struct node));
	struct node *third  = malloc(sizeof(struct node));

	head->data = 11;
	head->next = second;
	
	second->data = 13;
	second->next = third;

	third->data = 699;
	third->next = NULL;

	return head;
}

void len(struct node *head)
{
	struct node *current = malloc(sizeof(struct node));
	current = head;
	int count = 0;

	while(current != NULL) {
		count++;
		current = current->next;
	}

//	return count;
}

int GetNth(struct node *head, int index)
{
	struct node *current = malloc(sizeof(struct node));
	int x = 0, fail = 10;

	current = head;

//	index = index + 1;
	
/*	if ((index + 1) > count) {
		printf("Unable to find out the index\n");
		fail = 1;
	}

	if (fail == 1)
		return -1;
*/
	for ( ;(x != index); x++) {
		
		current = current->next;
	}

	return current->data;
//	printf("%d\n", current->data);
}				
	
main()
{
	struct node *head = malloc(sizeof(struct node));
	struct node *current;
	int n;
	int data = 0;

	head = Build(); // {11,13,699}

	current = head; // copying created list to current = {11, 13, 699}

	len(head);

	data = GetNth(head,2);
	
	printf("%d\n", data);
}	

	
		
