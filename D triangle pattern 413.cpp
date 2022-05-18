// D D D D D D D 
//   C C C C C
//    B B B
//      A

#include<stdio.h>
#include<conio.h>
int main()
{
	int r,c,n, ch=68, ch1=68;
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
	   ch = ch-1;
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
		ch1 =ch1-1;
	    printf("\n");
	}
}