//      0
//    1 0 1
//  2 1 0 1 2  
//3 2 1 0 1 2 3

#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n,s1=4,s2=0;
	for(i=1;i<=4;i++)
	{
	for(j=1;j<=4;j++)
	{
			if(i+j > 4)
			{
				s1=s1-1;
				printf("%d ",s1);

			}
			else
			{
				s1=s1-1;
				printf("  ");
			}
	}
		s1=4;
		
	for(n=3; n>=1; n--)
	{
		if(i + n > 4)
		{	
		s2= s2 +1;
		printf("%d ",s2);
		}
		else
		{
		printf(" ");	
		}
	}
	s2=0;
	printf("\n");
	}
}