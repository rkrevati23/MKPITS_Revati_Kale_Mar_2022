#include<stdio.h>
main()
{
	int i,j,size;
	
	printf("the size of the square\n");
	scanf("%d",&size);
	
	if(size < 1 || size >10)
	{
		printf("size of the range 1to 10\n");
	}
	for(i=0; i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf(" # ");
	    }
	    printf("\n");
	}
}