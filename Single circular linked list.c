#include<stdio.h>
#include<stdlib.h>
void append();
void display();
struct node
{
	int data;
	struct node* link;
	
};
struct node* root=NULL,*temp=NULL;
int main()
{
	int ch;
	while(1)
	{
		printf("Single circular linked list operaton\n");
		printf("Press 1 for append\n");
		printf("Press 2 for display\n");
		printf("Press 3 for exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				append();
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
void append()
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data:");
	scanf("%d",&newnode->data);
	if(root==NULL)
	{
		root=newnode;
		temp=newnode;
	}
	else
	{
		temp->link=newnode;
		temp=newnode;
	}
	temp->link=root;
}
void display()
{
	struct node* p=root;
	if(root==NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		struct node *temp1=root;
		while(temp1->link!=root)
		{
			printf("%d\n",temp1->data);
			temp1=temp1->link;
		 } 
		 printf("%d\n",temp->data);
	}
}
