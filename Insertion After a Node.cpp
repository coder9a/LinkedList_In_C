#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
struct node* head = NULL;
int display(struct node *s)
{
	if(s == NULL)
	{
		printf("Linked List is Empty\n");
	}
	else
	{
		while(s != NULL)
	    {
		    printf("%d\t", s->data);
    		s = s->next;
	    }
	}
}
struct node * insert_after(struct node * prev, struct node * nxt, int value)
{
	struct node *ptr = (struct node *)malloc(sizeof(struct node));
	ptr->data = value;
	ptr->next = nxt;
	prev->next = ptr;
	return head;
}
int main()
{
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
	printf("Linked list before insertion\n");
	display(a);
	insert_after(b, c, 25);
	printf("\nLinked list before insertion\n");
	display(a);
	return 0;
}
