//   A
//  B B
// C C C
//D D D D

#include<stdio.h>
#include<conio.h>
int main()
{
	int r,c ,ch=64;
	for(r=1;r<=4;r++)
	{
		for(c=1;c<=4;c++)
		{
			if(r+c > 4)
			{
				printf(" %c ",r+ch);
                
			}
			else
			{
				printf(" ");
		
		    }
		}
			printf("\n");
	}
}