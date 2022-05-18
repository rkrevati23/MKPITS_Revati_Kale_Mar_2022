//      A
//    A B A
//  A B C B A  
//A B C D C B A

#include<stdio.h>
#include<conio.h>
int main()
{
	int r,c,n, ch=64, ch1=64 ;
	for(r=1;r<=4;r++)
	{
		for(c=1;c<=4;c++)
		{
			if(r+c>4)
			{
				ch = ch+1;
				printf("%c ",ch);
			}
			else
			{
    			printf("  ");
		    }
		}
		ch=64;
		
		for(n=3; n>=1; n--)
		{
			if(r+n>4)
			{

				printf("%c ",ch1);
					ch1= ch1-1;
			}
			else
			{
				printf("  ");
				ch1= ch1-1;
			}
		}
		ch1 =64;
		ch1 =ch1+r;
	printf("\n");
	}
}