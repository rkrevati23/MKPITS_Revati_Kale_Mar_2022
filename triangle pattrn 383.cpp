//      1
//    1 2 1 
//  1 2 3 2 1  
//1 2 3 4 3 2 1

#include<stdio.h>
#include<conio.h>
int main()
{
	int r,c,n,add1=0,add2=1;
	for(r=1;r<=4;r++)
	{
		for(c=1;c<=4;c++)
		{
			if(r+c>4)
			{
				add1 =add1+1;
				printf("%d ",add1);
			}
			else
			{
			printf("  ");
		    }
		}
		add1 =0;
		
		for(n=3; n>=1; n--)
		{
			if(r+n >4)
			{
				add2 = add2 -1;
				printf("%d ",add2);

			}
			else
			{
				printf("  ");
				add2 = add2-1;
			}
		}
		add2 =1;
		add2 =add2+r;
	printf("\n");
	}
}