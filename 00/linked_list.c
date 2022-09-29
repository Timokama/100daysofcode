#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>

void main(){
	struct node
		{
			int data;
			struct node *link;
		};
		typedef struct node *NODE;
		NODE *head, *new_node, *temp = NULL;
		int count = 0;
		int choice = 1;
		new_node = 0;
			
		while (choice == 1);
		{
			new_node = (NODE *)malloc(sizeof(NODE));
			printf("Enter item:\n");
			scanf("%d",&(head->data));
			new_node->link = NULL;
			if (head != NULL)
			{
				temp = head;
				while (temp->link)
					temp = temp->next;
				temp->link = new_node
			}
			else
			{
				temp = head;
			}
			fflush(stdin);
			printf("Do you want to continue(TYPE 0 OR 1)?\n");
			scanf("%d", &choice);
		}
		temp -> link = 0;
		/*reset the beginning*/
		temp = new_node;
		/*Sttatus of the linked list*/
		while (temp != 0)
		{
			printf("%d ", temp->data);
			count++;
			temp = temp->data;
		}

		printf("NULL\n");
		printf("No.of nodes in the list = %d\n",count);
}
