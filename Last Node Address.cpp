#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
struct node * head = NULL;
int lastnode()
{
	struct node *s1;
	if(head == NULL)
	{
		printf("Linked list is empty\n");
	}
	else
	{
		struct node *s = head;
		while(s!= NULL)
		{
			s1 = s;
			s = s->next;
		}
		printf("\nAddress of Last Node = %d",s1);
	}
}
int display(struct node *s)
{
	while(s != NULL)
	{
		printf("%d\t",s->data);
		printf("%d\t", s);
		s = s->next;
		printf("\n");
	}
	
}
int main()
{
	struct node *a, *b, *c, *d, *e, *f;
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
	head=a;
	display(head);
	lastnode();
	return 0;
}
