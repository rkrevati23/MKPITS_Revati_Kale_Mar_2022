#include<stdio.h>
#include<string.h>
main()
{

	char name1[20]={"ishu"};
	char name2[20]={"guddu"};
	
	if(strcmp(name1,name2)==0)
	{
		printf("string name1 string name2 is same");
    }
    else
    {
    	printf("string name1 string name2 is  not same");
	}
}