#include<stdio.h>
void TOH(int n,char source,char helper,char destination)
{
	if(n>0)
	{
		TOH(n-1,source,destination,helper);
		printf("Move a disc from %c to %c\n",source,destination);
//		TOH(TOH(n-1,source,distination,helper);)
	}
}
int main()
{
	TOH(5,'A','B','c');
	return 0;
}
