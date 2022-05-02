#include<stdio.h>
int main()
{
	int i,j, m1[2][2], tran[2][2];
	
	printf("enter 2 X 2 matrix:\n");
	
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			scanf("%d",&m1[i][j]);
		}
	}
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			tran[j][i]=m1[i][j];
		}
	}
	printf("transpose of matrix:\n");
	
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			
		printf("m1[%d][%d]=%d\n",i,j,tran[i][j]);
			
	    }
	    printf("\n");
	}
}