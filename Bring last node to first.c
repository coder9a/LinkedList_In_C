#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
int display(struct node *s)
{
	while(s != NULL)
	{
		printf("%d\t",s->data);
		printf("%d\t", s);
	    printf("\n");
		s = s->next;
	}
	printf("\n");
}
struct node * lasttofirst(struct node *head)
{
	struct node * s1,*s;
	s = head;
	if(s->data == NULL)
	{
		printf("Linked List is empty");
	}
	else
	{
		while(s->next != NULL)
		{
			s1 = s;
			s = s->next;
		}
		s->next = head;
		s1->next = NULL;
		head = s;
		return head;
	}
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
	display(a);
	struct node * x = lasttofirst(a);
	display(x);
	return 0;
}
