#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node * next;
};
//Method 1
void midElement(struct node * head)
{
	struct node *one=NULL;
	struct node *two=NULL;
	one=head;
	two=head;
	if(head!=NULL)
	{
		while(two !=NULL && two->next!=NULL)
	{
		one=one->next;
		two=two->next->next;
	}
	printf("%d \n ",one->data);
	
	}
	
}
//method 2
void midElement2(struct node * head)
{
	struct node *temp=head;
	int counter=1;
	
	while(head!=NULL)
	{
		counter+=1;
		if (counter%2==1)
		{
			temp=temp->next;
		}
		head=head->next;
		
	}
	printf("%d \n",temp->data);
}
 
void push(struct node** head_ref, int new_data)
{
    /* allocate node */
    struct node* new_node =
        (struct node*) malloc(sizeof(struct node));
 
    /* put in the data  */
    new_node->data  = new_data;
 
    /* link the old list off the new node */
    new_node->next = (*head_ref);
 
    /* move the head to point to the new node */
    (*head_ref)    = new_node;
}
 
// A utility function to print a given linked list
void printList(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d->", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}
 
/* Drier program to test above function*/
int main()
{
    /* Start with the empty list */
    struct node* head = NULL;
    int i;
 
    for (i=5; i>0; i--)
    {
        push(&head, i);
        printList(head);
        midElement2(head);
    }
 
    return 0;
}
