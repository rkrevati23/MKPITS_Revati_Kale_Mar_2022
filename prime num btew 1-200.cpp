#include<stdio.h>
int main()
{
	int i,j,x,y;
	printf("prime numbers between 1-200\n");
	
	for(x=1;x<=200;x++)
	
	{
	for(i=1;i<=x;i++)
	{
		y=0;
		
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				y=y+1;
			}

		}
	
	}
		if(y==2)
		{
			printf(" %d\n",x);
			
		}
}
    
}