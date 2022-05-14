//   A
//  c c
// E E E
//G G G G

#include<stdio.h>
#include<conio.h>
int main()
{
	int r,c ,ch=65;
	for(r=1;r<=4;r++)
	{
		for(c=1;c<=4;c++)
		{
			if(r+c > 4)
			{
				printf(" %c ",ch);
                
			}
			else
			{
				printf(" ");
		    }
		}
		    ch=ch+2;
			printf("\n");
	}
}