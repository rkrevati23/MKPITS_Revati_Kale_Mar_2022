#include<stdio.h>
main()
{
	char name[10],i;
	 
	printf("enter any name\n");
	scanf("%s",name);
	
	for(i=0;name[i]!='\0';i++)
	{
		printf("%c",name[i]);
	}

}