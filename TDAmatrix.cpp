#include<stdio.h>
#include<conio.h>
main()
{
	int i, j, m1[2][2];
	printf("enter  2*2 matrix\n");
	
	for(i=0;i<=1;i++)
	{
	for(j=0;j<=1;j++)
	  {
		printf("m1[%d][%d]=",i,j);
		scanf("%d",&m1[i][j]);
	  }
    }
    //display
    for(i=0;i<=1;i++)
    {
    for(j=0;j<=1;j++)
	    {
		printf("m1[%d][%d]=%d",i,j,m1[i][j]);
		}
		
	}
}