#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
	int  i,j;
	char name1[20];
	char name2[20];
	
	printf("enter first string :");
	scanf("%s",name1);
	
	printf("enter second string :");
	scanf("%s",name2);
	
	for(i=0;name1[i]!='\0';i++);
	
	for(j=0;name2[j]!='\0';j++,i++)
	{
	   name1[i]=name2[j];
	}
	name1[i]='\0';
	
	printf("%s",name1);
	
	}