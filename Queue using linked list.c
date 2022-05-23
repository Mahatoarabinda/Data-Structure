//Implemention queue Using Linked List
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void display();
void enqueue();
void dequeue();
struct node
{
	int data;
	struct node* next;
};
struct node *head=NULL,*tail=NULL;
int main()
{
	int ch;
	while(1)
	{
		printf("\n------------------Queue Operations-------------------\n");
		printf("1.enqueue opertion\n");
		printf("2.dequeue opertion\n");
		printf("3.display opertion\n");
		printf("4.Exit\n");
		printf("Enter your option number :");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				enqueue();
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
		}
	}
	getch();
	return 0;
}
void enqueue()
{
	struct node *newnode=NULL;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data :");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
		tail=newnode;
	}
	else
	{
		tail->next=newnode;
		tail=newnode;
	}
}
void dequeue()
{
	if(head==NULL)
	{
		printf("Queue is Empty\n");
		
	}
	else
	{
		struct node *temp=head;
		printf("Dequeue element is : %d",temp->data);
		head=temp->next;
		temp->next=NULL;
		free(temp);
	}
}
void display()
{
	if(head==NULL)
	{
		printf("Queue is empty\n");
		
	}
	else
	{
		struct node *temp=head;
		while(temp!=NULL)
		{
			printf("%d\t",temp->data);
			temp=temp->next;
		}
	}
}
