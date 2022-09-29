#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}node;

node *createlinkedlist(int n);
void display(node *head);
node *reverse(node *head);

int main()
{
	int n;
	node *HEAD = NULL;
	printf("How many NODES: ");
	scanf("%d",&n);
	HEAD = createlinkedlist(n);
	display(HEAD);
	node *head = NULL;
	head = reverse(HEAD);
	display(head);
	return 0;

}

node *createlinkedlist(int n)
{
	int i = 0;
	node *head, *temp = NULL;
	node *link = NULL;

	for (; i < n; i++)
	{
		head = (node *)malloc(sizeof(node *));
		printf("Enter value %d:  ", i + 1);
		scanf("%d", &(head->data));
		head->next = NULL;

		if (temp == NULL)
		{
			temp = head;
		}
		else
		{
			link = temp;
			while (link->next != NULL)
			{
				link = link->next;
			}
			link->next = head;
		}

	}
	return temp;
}
node *reverse(node *head)
{
	node *prev = NULL;
	node *link = NULL;
	while (head != NULL)
	{
		link = head->next;
		head->next = prev;
		prev = head;
		head = link;
	}
	head = prev;
	return head;
}
void display(node *head)
{
	node *temp = head;
	while (temp != NULL)
	{
		printf("%d->",temp->data);
		temp = temp->next;
	}
	printf("\n");
}
