#include<stdio.h>
#include<conio.h>

	union stud     //union wiyh name stud created by using struct key
 	{
		
		int id;
		char name[20];
		
	}s1;
	
	int main()
{

	printf("enter stud id\n");
	scanf("%d", &s1.id);
	
	printf("enter stud name\n");
	scanf("%s", s1.name);
	
	printf("stud id= %d\n",s1.id);
	printf("stud name=%s ",s1.name);
	
}