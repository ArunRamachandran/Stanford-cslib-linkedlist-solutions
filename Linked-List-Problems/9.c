#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *next;
};

struct node *make()
{
	struct node *head = malloc(sizeof(struct node));
	struct node *second = malloc(sizeof(struct node));
	struct node *third = malloc(sizeof(struct node));
	struct node *fourth = malloc(sizeof(struct node));
	struct node *fifth = malloc(sizeof(struct node));

	head->data = 1;
	head->next = second;
	
	second->data = 10;
	second->next = third;

	third->data = 3;
	third->next = fourth;

	fourth->data = 4;
	fourth->next = fifth;

	fifth->data = 5;
	fifth->next = NULL;

	return head;
}

int len(struct node *head)
{
	int l = 0;
	
	while (head != NULL) {
		l++;
		head = head->next;
	}
	
	return l;
}

void FrontBackSplit(struct node **head, struct node **front, struct node **back)
{
	int length = len(*head);
	int med = 0;
	int x = 0;
	struct node *copy = malloc(sizeof(struct node));

	printf("In fn.\n");
	printf("Len : %d\n", length);

	if (length % 2 != 0) 
		length = length + 1;
	
	if (length % 2 == 0) {
//		printf("Even num.\n");
		med = length / 2;
		while ( (*head) != NULL) {
			x++;

			if (x <= med) {
				if (x == 1) {
					struct node *new = malloc(sizeof(struct node));
					new->data = (*head)->data;
					new->next = NULL;
					(*front)   = new;
					copy = (*front);
				}
				else {
					struct node *new = malloc(sizeof(struct node));
					new->data = (*head)->data;
					printf("%d\n", (*head)->data);
					new->next = NULL;
					(*front)->next = new;
//					Display(front);
				}
			}
			
			if (x > med) {
				if (x == (med + 1)) {
					struct node *bk = malloc(sizeof(struct node));
					bk->data = (*head)->data;
					bk->next = NULL;
					(*back)  = bk;
				}
				else {
					struct node *bk = malloc(sizeof(struct node));
					bk->data = (*head)->data;
					bk->next = NULL;
					(*back)->next = bk;
				}
			}
			
			if ((*head)->next != NULL)
				(*head) = (*head)->next;
			else
				return;
		} 
	}
	
//	Display(copy);			
}		
		
main()
{
	struct node *head = NULL;
	struct node *front = NULL;
	struct node *back = NULL;

	head = make();
	Display(head);
	FrontBackSplit(&head, &front, &back);	
	printf("\nFront List\n");
	Display(front);
	printf("\nBack List\n");
	Display(back);
}
