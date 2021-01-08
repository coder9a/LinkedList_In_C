#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node * next;
};
int display(struct node *ptr)
{
	if(ptr == NULL)
	{
		printf("Linked List is Empty\n");
	}
	else
	{
		while(ptr != NULL)
	    {
		    printf("%d\t", ptr->data);
    		ptr = ptr->next;
	    }
	}
}
struct node * insert_begin(struct node * head, int ele)
{
	struct node* begin;
	begin = (struct node*)malloc(sizeof(struct node));
	if(begin==NULL)
	{
		printf("Memory can't be allocated to new");
	}
	else
	{
		begin->data = ele;
		begin->next = NULL;
		head = begin;
	}
	return head;
}
struct node * insert_last(struct node * head, int ele)
{
	struct node* last, *temp;
	last = (struct node*)malloc(sizeof(struct node));
	if(last==NULL)
	{
		printf("Memory can't be allocated to new");
	}
	else
	{
		last->data = ele;
		last->next = NULL;
		temp = head;
		while(temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = last;
	}
	return head;
}
struct node * insert_between(struct node * head, int ele, int pos)
{
	int i=0;
	struct node* p, *temp;
	p = (struct node*)malloc(sizeof(struct node));
	if(p==NULL)
	{
		printf("Memory can't be allocated to new");
	}
	else
	{
		p->data = ele;
		p->next = NULL;
		temp = head;
		while(i != pos-1)
		{
			temp = temp->next;
			i++;
		}
		p = temp->next;
		temp->next = p;
	}
	return head;
}
int main()
{
	struct node * head = NULL;
	int x,n,ele,pos;
	head = (struct node*)malloc(sizeof(struct node));
	do
	{
	printf("\n1. Insert Beginning\n2. Insert InBetween\n3. Insert End\n4. Exit\n");
		scanf("\n%d",&n);
	switch(n)
	{
		case 1: printf("Enter element\t");
		scanf("%d",&ele);
		head = insert_begin(head, ele);
		display(head);
		break;
		case 2: printf("Enter element\t");
		scanf("%d",&ele);
		head = insert_last(head, ele);
		break;
		case 3: printf("Enter element and position \t");
		scanf("%d %d",&ele,&pos);
		head = insert_between(head, ele,pos);
		display(head);
		break;
		case 4: exit(1);
		default: printf("\nWrong Choice");
	}
}while(n!=4);
}
