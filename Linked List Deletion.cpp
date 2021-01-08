#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node * next;
};
int display(struct node *ptr)
{
	while(ptr != NULL)
	    {
		    printf("%d\t", ptr->data);
    		ptr = ptr->next;
	    }
	return 0;
}
struct node * deletefirst(struct node * head)
{
	if(head == NULL)
	{
		printf("Linked List is empty\n");
	}
	struct node * curr;
	curr = head;
	head = head->next;
	curr->next = NULL;
	free(curr);
	return head;
}
struct node * delete_last(struct node * head)
{
	if(head == NULL)
	{
		printf("Linked List is empty\n");
	}
	struct node * curr;
	curr = head;
	while(curr->next->next != NULL)
	{
		curr = curr->next;
	}
	curr->next = NULL;
	return head;
}
struct node * delete_position(struct node * head, int pos)
{
	struct node *p , *q;
	p = head; 
	q = head->next;
	for(int i=1;i<pos-1;i++)
	{
		q = q->next;
		p = p->next;
	}
	p->next = q->next;
	free(q);
	return head;
}
struct node * delete_value(struct node * head,int ele)
{
	struct node *p , *q;
	p = head; 
	q = head->next;
	while(q->data != ele && q->next != NULL)
	{
		q = q->next;
		p = p->next;
	}
	if(q->data == ele)
	{
		p->next = q->next;
		free(q);
	}
	return head;
}
int main()
{
	struct node * head;
	int n,ele,pos;
	struct node *a, *b, *c, *d, *e, *f, *s;
	s = (struct node*)malloc(sizeof(struct node));
	a = (struct node*)malloc(sizeof(struct node));
	b = (struct node*)malloc(sizeof(struct node));
	c = (struct node*)malloc(sizeof(struct node));
	d = (struct node*)malloc(sizeof(struct node));
	e = (struct node*)malloc(sizeof(struct node));
	f = (struct node*)malloc(sizeof(struct node));
	a->data = 10;
	a->next = b;
	b->data = 20;
	b->next = c;
	c->data = 30;
	c->next = d;
	d->data = 40;
	d->next = e;
	e->data = 50;
	e->next = f;
	f->data = 60;
	f->next = NULL;
	head = a;
	printf("Given Linked list is\n");
	display(head);
    printf("\n1. Delete First\n2. Delete Last\n3. Delete By Index\n4. Delete By Value\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1: head = deletefirst(head);
		printf("Linked list after deletion\t");
		display(head);
		break;
		case 2: head = delete_last(head);
		printf("Linked list after deletion\t");
		display(head);
		break;
		case 3: printf("Enter position \t");
		scanf("%d",&pos);
		head = delete_position(head,pos);
		printf("Linked list after deletion\t");
		display(head);
		break;
		case 4: printf("Enter Value \t");
		scanf("%d",&ele);
		head = delete_value(head,ele);
		printf("Linked list after deletion\t");
		display(head);
		break;
		default: printf("\nWrong Choice");
	}
}
