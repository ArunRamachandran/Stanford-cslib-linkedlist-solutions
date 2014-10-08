#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *next;
};

#define FALSE 0
#define TRUE 1

struct node *Build()
{
	struct node *head = malloc(sizeof(struct node));
	struct node *second = malloc(sizeof(struct node));
	struct node *third = malloc(sizeof(struct node));

	head->data = 5;
	head->next = second;

	second->data = 2;
	second->next = third;
	
	third->data = 3;
	third->next = NULL;

	return head;
}
 
 void Display(struct node *head)
 {
         printf("%d\n", head->data);
         if (head->next != NULL) {
                 Display(head->next);
         }
 }

int len(struct node *head)
 {
         int l = 0;
         while (head != NULL) {
                 l++;
                 if (head->next == NULL)
                         break;
                 else
                         head = head->next;
         }
         return l;
 }

 void SortedInsert(struct node **head, struct node *new)
 {
         printf("In sorted Insert\n");
          int condition = FALSE;
          struct node *current = NULL;
 
         if ((*head) == NULL) {
                 struct node *first = malloc(sizeof(struct node));
                 first->data = new->data;
                 (*head) = first;
                 first->next = NULL;
		 return ;
         }
 
         else {
                 while( ((*head) != NULL) && (condition == FALSE) ) {
                          if ( ((*head)->data) < (new->data)) { //i.e if values in the nodes are smaller than the new node value, then fwd the pointer
                                  current = (*head); // keeping present value into current
                                 (*head) = (*head)->next;
                         }
                         else
                                  condition = TRUE;
                 }
         }


        	//(*head) = new;
        	new->next = (*head)->next;
		(*head)->next = new;
	        printf("Did sorted insert\n");
 }

void InsertSort(struct node **head)
{
	struct node **origin = head;

	struct node *result  = NULL; // to keep the result List.
	struct node *copy_result = result;

//	int length = len(*copy)
	
	while ((*head) != NULL) { //runing through the original List
		SortedInsert(&result, *head);
		(*head) = (*head)->next;
	}		

	printf("sorted :\n");
	Display(result);

}

main()
{
	struct node *head = NULL;

	head = Build(); // {2, 5, 3}
	printf("Original list :\n");
	Display(head);
	InsertSort(&head);


}
	
