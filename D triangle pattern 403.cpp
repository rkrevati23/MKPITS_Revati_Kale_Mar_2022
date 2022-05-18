// 4 4 4 4 4 4 4 
//  3 3 3 3 3
//    2 2 2
//      1

#include<stdio.h>
#include<conio.h>
int main()
{
	int r,c,n, add1=7, add2=7 ;
	for(r=4;r>=1;r--)
	{
		for(c=1;c<=4;c++)
		{
			if(r+c>4)
			{
				printf("%d ",add1);
			}
			else
			{
			printf("  ");
		    }
		    
	   }
	   add1 = add1-2;
		for(n=3; n>=1; n--)
		{
			if(r+n>4)
			{
				printf("%d ",add2);

			}
			else
			{
				printf("  ");
			}
		}
	add2= add2-2;	
	printf("\n");
	}
}