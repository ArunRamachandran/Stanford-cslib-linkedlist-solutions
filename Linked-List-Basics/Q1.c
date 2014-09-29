#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *next;
};

/*Modified BuildOneTwoThree function */

struct node *BuildOneTwoThree() 
{
	struct node *head = malloc(sizeof(struct node));
	head->data = 1;
	head->next = malloc(sizeof(struct node));

	head->next->data = 2;
	head->next->next = malloc(sizeof(struct node));

	head->next->next->data = 3;
	head->next->next->next = NULL;

	return head;
}
/* print_list function will print data elements 
in each node */
void print_list(struct node *p)
{
	printf("%d\n" , p->data);
	if (p->next != NULL)
		print_list(p->next);
	if (p->next == NULL)
		return;
	 
}
main()
{
	struct node *p;
	p = BuildOneTwoThree();
	
	print_list(p);

	return 0;
}


