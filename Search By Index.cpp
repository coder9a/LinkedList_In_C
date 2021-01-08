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
struct node * create(int n)
{
	int i;
	struct node * temp, *head, *p;
	temp = NULL;
	head = NULL;
	p = NULL;
	for(i=0;i<n;i++)
	{
		temp = (struct node*)malloc(sizeof(struct node));
		printf("Enter data for node number %d\t",i+1);
		scanf("%d",&(temp->data));
		temp->next = NULL;
		if(head == NULL)
		{
			head = temp;
		}
		else
		{
			p = head;
			while(p->next != NULL)
			{
				p = p->next;
			}
			p->next = temp;
		}
	}
	return head;
}
int searchbyvalue(struct node * head, int n)
{
	int index,i=0;
	printf("Enter node index to be searched\t");
	scanf("%d",&index);
	if(index>n)
	{
		printf("Enter valid index");
	}
	else
	{
		while(i != index-1)
		{
			head = head->next;
			i++;
		}
		printf("\nElement persent at index %d is %d",index, head->data);
	}
}
int main()
{
	struct node * head, *r;
	int n;
	printf("Create Linked List from Scratch\n");
	printf("How many elements\t");
	scanf("%d",&n);
	head = create(n);
	display(head);
    searchbyvalue(head,n);
}
