#include<stdio.h>
#include<conio.h>

int main()
{
int a[10],n,s,i;

printf("enter the number of array : ");
scanf("%d",&n);

printf("enter the array\n");
for(i=0;i<=n;i++)
{
	
printf("a[%d]= ",i);
scanf("%d",&a[i]);

}
printf("enter the number want to search  \n");
scanf("%d",&s);

for(i=0;i<=n;i++)
{
	
if(a[i]==s)
{
	
   printf("number found at=%d",i);
break;

}
}
getch();
}