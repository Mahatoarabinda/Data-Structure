#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define N 5
void push();
void pop();
void peek();
void display();
int top=-1;
int stack[N];
int main()
{
	int ch;
	do
	{
		printf("Press 1 for push\n");
		printf("Press 2 for pop\n");
		printf("Press 3 for peek\n");
		printf("Press 4 for display\n");
		printf("Press 5 for exit\n");
		printf("Enter your choice:\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				peek();
				break;
			case 4:
				display();
				break;
			case 5:
				exit(0);
			default:
				printf("Invalid data\n");
		}
	}
	while(ch!=0);
	getch();
}
void push()
{
	int x;
	printf("Enter data:\n");
	scanf("%d",&x);
	if(top==N-1)
	{
		printf("Overflow\n");
	}
	else
	{
		top++;
		stack[top]=x;
	}
}
void pop()
{
	int item;
	if(top==-1)
	{
		printf("Underflow\n");
	}
	else
	{
		item=stack[top];
		top--;
		printf("%d\n",item);
	}
}
void peek()
{
	if(top==-1)
	{
		printf("Stack is empty\n");
	}
	else
	{
		printf("%d\n",stack[top]);
	}
}
void display()
{
	int i;
	for(i=top;i>=0;i--)
	{
		printf("%d\n",stack[i]);
	}

}


