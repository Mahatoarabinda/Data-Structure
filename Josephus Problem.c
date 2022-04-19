#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
	int player_id;
	struct node *next;
};
struct node *start, *ptr, *new_node;
int main()
{
	int i,k,n,count;
	printf("Enter the number of player : ");
	scanf("%d",&n);
	printf("\n Enter the value of k : ");
	scanf("%d",&k);
	start=malloc(sizeof(struct node));
	start->player_id=1;
	ptr=start;
	for(i=0;i<=n;i++)
	{
		new_node=malloc(sizeof(struct node));
		ptr->next=new_node;
		new_node->player_id=i;
		new_node->next=start;
		ptr=new_node;
	}	
	for(count=n;count>1;count--)
	{
		for(i=0;i<k;++i)
		ptr=ptr->next;
		printf(" *****deleted***** %d \n",ptr->player_id);
		ptr->next=ptr->next->next;
	}
	printf("The winner is player %d	",ptr->player_id);
	getch();
	return 0;
}
