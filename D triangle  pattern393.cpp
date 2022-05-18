//4 4 4 4 4 4 4 
//  3 3 3 3 3
//    2 2 2
//      1

#include<stdio.h>
#include<conio.h>
int main()
{
	int r,c,n;
	for(r=4;r>=1;r--)
	{
		for(c=1;c<=4;c++)
		{
			if(r+c>4)
			{
				printf("%d ",r);
			}
			else
			{
			printf("  ");
		    }
	   }
		for(n=3; n>=1; n--)
		{
			if(r+n>4)
			{
				printf("%d ",r);

			}
			else
			{
				printf("  ");
			}
		}
	printf("\n");
	}
}