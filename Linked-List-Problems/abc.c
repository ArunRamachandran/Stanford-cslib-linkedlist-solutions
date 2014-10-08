#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *next;
};

void Delete(struct node *head, struct node *prev)
 {
          if (head->next  != NULL) {
                  prev->next = head->next;
                  free(head);
          }
          else {
                  prev->next = NULL;
                  free(head);
          }
 }

void Display(struct node *head)
{
	printf("%d\n", head->data);
	if (head->next != NULL)
		Display(head->next);
}

main()
{
	struct node *head = malloc(sizeof(struct node));
	struct node *second= malloc(sizeof(struct node));
	struct node *third = malloc(sizeof(struct node));

	head->data = 1;
	head->next = second;
	
	second->data = 2;
	second->next = third;

	third->data = 3;
	third->next = NULL;

	Display(head);
	Delete(second, head);
	printf("\n");
	Display(head);
}
