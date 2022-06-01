//Implementation Graph Using Stack

#include<stdio.h>
int main()
{
	int matrix[5][5]=
	{
		{0,1,0,1,0},
		{1,0,1,0,0},
		{0,1,0,1,1},
		{1,0,1,0,1},
		{0,0,1,1,0}
	};
	int i,j;
	for(i=0;i<5;i++)
	{
		printf("%d",i);
		{
			for(j=0;j<5;j++)
			{
				if(matrix[i][j]==1)
				{
					printf("->%d",j);
				}
			}
		}
		printf("\n");
	}
	return 0;
}
