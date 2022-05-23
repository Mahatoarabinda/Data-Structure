#include<stdio.h>
#include<stdlib.h>
void append();
void display();
struct node
{
	struct node* left;
	int data;
	struct node* right;
	
};
struct node* root=NULL;
int main()
{
	int ch;
	while(1)
	{
		printf("Double linked list operation\n");
		printf("Press 1 for Append\n");
		printf("Press 2 for Dispaly\n");
		printf("Press 3 for Exit\n");
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
	struct node* newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter your data:");
	scanf("%d",&newnode->data);
	newnode->left=NULL;
	newnode->right=NULL;
	if(root==NULL)
	{
		root=newnode;
	}
	else
	{
		struct node* p=root;
		while(p->right!=NULL)
		{
			p=p->right;
		}
		p->right=newnode;
		newnode->left=p;
	}
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
		while(p!=NULL)
		{
			printf("%d\n",p->data);
			p=p->right;
		}
	}
}

