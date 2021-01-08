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
void sum(struct node * head)
{
	if(head == NULL)
	{
		printf("Linked List is empty\n");
	}
	struct node * curr=head;
	int sum=0;
	while(curr != NULL)
	{
		sum = sum + curr->data;
		curr = curr->next;
	}
	printf("\nSum of nodes = %d",sum);
}
int main()
{
	struct node * head;
	int n;
	printf("Create Linked List from Scratch\n");
	printf("How many elements\t");
	scanf("%d",&n);
	head = create(n);
	display(head);
	sum(head);
}
