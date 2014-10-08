#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *next;
};

main()
{
	struct node *head = NULL;
	struct node *current = NULL;

	int l = 0;
	int x = 0, cnt = 0;

	head = malloc(sizeof(struct node));

	head = Build();
	l = count(head);

	current = head;

	while(current != NULL) {
		if (current->data == 2)
			++cnt;
		else 
			current = current->next;
	}
			
	
	printf("%d\n", cnt);
}
	
