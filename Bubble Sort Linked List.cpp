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
		printf("%d\t", s->data);
		s = s->next;
	}
	printf("\n");
}
int swap(struct node *a, struct node *b)
{
	int temp = a->data;
	a->data = b->data;
	b->data = temp;
}
int bubblesort_LL(struct node * head)
{
	int temp,flag=0;
	struct node *i, *j;
	for(i = head; i->next != NULL; i= i->next)
	{
		for(j=i->next;j != NULL; j=j->next)
		{
			if(i->data > j->data)
			{
				swap(i,j);
			}
		}
	}	
}
int main()
{
	struct node *a, *b, *c, *d, *e, *f, *s;
	a = (struct node*)malloc(sizeof(struct node));
	b = (struct node*)malloc(sizeof(struct node));
	c = (struct node*)malloc(sizeof(struct node));
	d = (struct node*)malloc(sizeof(struct node));
	e = (struct node*)malloc(sizeof(struct node));
	f = (struct node*)malloc(sizeof(struct node));
	a->data = 60;
	a->next = b;
	b->data = 50;
	b->next = c;
	c->data = 40;
	c->next = d;
	d->data = 30;
	d->next = e;
	e->data = 20;
	e->next = f;
	f->data = 10;
	f->next = NULL;
	printf("Unsorted data\n");
	display(a);
	bubblesort_LL(a);
	printf("Sorted data\n");
	display(a);
	return 0;
}
