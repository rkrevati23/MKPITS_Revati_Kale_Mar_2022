// A B C D E F G 
//  A B C D E
//    A B C
//      A

#include<stdio.h>
#include<conio.h>
int main()
{
	int r,c,n,add1=64, add2=64;
	for(r=4;r>=1;r--)
	{
		for(c=1;c<=4;c++)
		{
			if(r+c>4)
			{
				add1 = add1+1;
				printf("%c ",add1);
			}
			else
			{
			printf("  ");
		    }
	   }
	   add1 =64;
	   
		for(n=3; n>=1; n--)
		{
			if(r+n >4)
			{
				add2 = add2+1;
				printf("%c ",r+add2);

			}
			else
			{
				printf("  ");
			}
		}
		add2 =64;
	printf("\n");
	}
}