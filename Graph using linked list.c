//Implementation Graph Using Linked List

#include<stdio.h>
#include<stdlib.h>
int  main()
{
	int i,j;
	struct node
	{
		int data;
		struct node *link;
	};
	struct node *head[5],*newnode,*temp;
	for(i=0;i<5;i++)
	{
		printf("Head[%d]\n",i);
		for(j=0;j<5;j++)
		{
			newnode=(struct node *)malloc(sizeof(struct node));
			printf("Enter the data:");
			scanf("%d",&newnode->data);
			newnode->link=NULL;
			if(j==0)
			{
				head[i]=newnode;
			}
			else
			{
				temp=head[i];
				while(temp->link!=NULL)
				{
					temp=temp->link;
				}
				temp->link=newnode;
			}
		}
	}
	
//	start show the matrix connecctivity
//for(i=0;i<5;i++)
//  {  
//	temp=head[i];
//	for(j=0;j<5;j++)
//	{
//		printf("->%d",temp->data);
//	}
//	temp=temp->link;
//	printf("\n");
//  }
//   
//}
//end show the matrix connecctivity
 for(i=0;i<5;i++)
 {
 	printf("head[%d]",i);
 	temp=head[i];
 	for(j=0;j<5;j++)
 	{
 		if(temp->data==1)
 		{
 			printf("->%d",j);
		 }
		 temp=temp->link;
	 }
	 printf("\n");
 }
}
