#include<stdio.h>
#include<conio.h>
#include<string.h>

 int main()
{
	int i,vowels=0;
	char name[50];
	
	printf("enter any name\n");
	scanf("%s",name);
	

	for(i=0;name[i]!='\0';i++);
	{
			if(name[i]=='a'||name[i]=='e'||name[i]=='i',name[i]=='o'||name[i]=='u')
			{
 			    vowels=vowels+1;
		    }
	   
	  
	   printf("vowels= %d" ,vowels);
    }
	
return 0;	
}