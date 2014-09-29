/* to compute and return the
no.of nodes in the List
*/
struct node {
	int data;
	struct node *next;
}

int length(struct node *head)
{
	struct node *current = head;
	int count = 0;
	
	while (current != NULL) {
		count++;
		current = current->next;
	}
	
	return count;
}

main()
{
	struct node *mylist = BuildOneTwoThree();
	int len = length(mylist);
}
