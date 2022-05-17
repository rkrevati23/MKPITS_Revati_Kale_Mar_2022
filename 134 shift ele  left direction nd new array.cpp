#include<stdio.h>
#include<conio.h>

int main()
{
 int a[10],i,temp;
 printf("enter the nunbers:\n");
 for(i=0;i<5;i++)
 {
 printf("a[%d]= ",i);
 scanf("%d",&a[i]);
 }
       temp=a[0];
       a[0]=a[4];
       a[4]=temp;

  printf("new array after swaping first and last element\n");
  for(i=0;i<5;i++)
  {
    printf("a[%d]=%d\n",i,a[i]);

   }
    getch();

} 