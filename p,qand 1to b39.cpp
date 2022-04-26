#include<stdio.h>
#include<string.h>
main()
{
	int i,j,b,p,q;
    
    printf("enter  numbers in line\n ");
	scanf("%d",&p);
	printf("enter  numbers in line\n ");
	scanf("%d",&q);
	b=1;
	for(i=1; i<=p; i++)
	{
		for(j=1; j<=q ; j++)
		{
			printf("%d",b);
			
			b++;
		}
		printf("\n");
	}
}