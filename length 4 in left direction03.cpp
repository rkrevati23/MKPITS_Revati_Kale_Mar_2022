#include<stdio.h>
#include<conio.h>

int main()
{
	
    int i, a[4];

   printf("enter the array number\n");

   for(i=0;i<4;i++)
  {
  	
   printf("a[%d]=",i);
   scanf("%d",&a[i]);
   
  }

   printf("element rotate in new array\n");
   
   printf("%d\n %d\n %d\n %d\n",a[1],a[2],a[3],a[0]);
 
   
getch();
} 