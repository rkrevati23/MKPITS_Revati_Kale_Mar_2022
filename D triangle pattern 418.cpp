// G G G G G G G
//   E E E E E
//    C C C
//      A

#include<stdio.h>
#include<conio.h>
int main()
{
	int r,c,n, ch=71, ch1=71;
	for(r=4;r>=1;r--)
	{
		for(c=1; c<=4; c++)
		{
			if(r+c>4)
			{
				printf("%c ",ch);
			}
			else
			{
			printf("  ");
		    }
	   }
	   ch = ch-2;
		for(n=3; n>=1; n--)
		{
			if(r+n >4)
			{
				printf("%c ",ch1);

			}
			else
			{
				printf("  ");
			}
		}
		ch1 =ch1-2;
	    printf("\n");
	}
}