//EDCBA
//EDCB
//EDC
//ED
//E

#include<stdio.h>
#include<conio.h>
int main()
{
	int r,c,add=7;
	for(r=5;r>=1;r--)
	{
		for(c=1;c<=r;c++)
		{
			
		add=add-1;	
		printf("%c",(add+64));
		
		}
		add=7;
		printf("\n");
	}

}