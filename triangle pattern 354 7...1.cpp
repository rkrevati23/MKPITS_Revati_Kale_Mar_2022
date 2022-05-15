//   1
//  321
// 54321
//7654321


#include<stdio.h>
#include<conio.h>
int main()
{  
    int i,j,sp;
    
    for(i=1; i<=4; i++)
    {
    	for(sp=1; sp<=41-i; sp++)
    	{
    		printf(" ");
		}
		for(j=i*2-1; j>=1; j--)
		{
			printf(" %d",j);
		}
		printf("\n");
	}
getch();
}