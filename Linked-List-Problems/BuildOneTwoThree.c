#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node {
	int data;
	struct node *next;
};

struct node *BuildOneTwoThree()
{
	struct node *head =  malloc(sizeof(struct node));
	struct node *second =  malloc(sizeof(struct node));
	struct node *third  =  malloc(sizeof(struct node));

	head->data = 1;
	head->next = second;
	
	second->data = 2;
	second->next = third;

	third->data = 3;
	third->next = NULL;

	return head;
}
