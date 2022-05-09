#include<stdio.h>
#include<conio.h>
 
 union stud 
 {
 	int id;
 	char name[50];
	  
 } ;
 int main()
 {
 	union stud s1;
 	
 	printf("enter stud id\n");
 	scanf("%d",&s1.id);
 	
 	printf("enter stud name\n");
 	scanf("%s",s1.name);
 	
 	printf("stud id= %d\n",s1.id);
	printf("stud name=%s ",s1.name);
 	
 }