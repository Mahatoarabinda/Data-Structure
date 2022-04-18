#include<stdio.h>
#include<stdlib.h>
void createDCLL();
void display();
struct node
{
	struct node* left;
	int data;
	struct node* right;
};
struct node *head=NULL,*tail=NULL;
int main()
{
	int ch;
	while(1)
	{
		printf("Press 1 for createDCLL\n");
		printf("Press 2 for Display\n");
		printf("Press 3 for Exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				createDCLL();
				break;
			case 2:
				display();
				break;
			case 3:
				exit(0);
		}		
}
return 0;
}
void createDCLL()
{
	struct node *newnode=NULL;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data : ");
	scanf("%d",&newnode->data);
	if(head==NULL)
	{
		head=tail=newnode;
		head->left=head;
		head->right=head;
	}
	else
	{
		tail->right=newnode;
		newnode->left=tail;
		newnode->right=head;
		head->left=newnode;
		tail=newnode;
	}
}
void display()
{
	struct node *temp=head;
	if(head==NULL)
	{
		printf("Lit is empty\n");
	}
	else
	{
		while(temp!=tail)
		{
			printf("%d\n",temp->data);
			temp=temp->right;
		}
		printf("%d\n",temp->data);
	}
}
