//      0
//    1 0 1
//  2 1 0 1 2  
//3 2 1 0 1 2 3

#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n,ch=69,ch1=65;
	for(i=1;i<=4;i++)
	{
	for(j=1;j<=4;j++)
	{
			if(i+j > 4)
			{
				ch =ch-1;
				printf("%c ",ch);

			}
			else
			{
				ch = ch-1;
				printf("  ");
			}
	}
		ch=69;
		
	for(n=3; n>=1; n--)
	{
		if(i + n > 4)
		{	
		ch1 = ch1 +1;
		printf("%c ",ch1);
		}
		else
		{
		printf(" ");	
		}
	}
	ch1= 65;
	printf("\n");
	}
}