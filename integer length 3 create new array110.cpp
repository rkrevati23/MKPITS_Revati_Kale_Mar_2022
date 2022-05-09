#include<stdio.h>
#include<conio.h>
int main()
{
int i;
int a[]={1,5,7};

printf("enter original array number\n");

for(i=0;i<3;i++)
{
	
printf("a[%d]=",i);
scanf("%d",&a[i]);

}

printf("the new array are:");

  for(i=0;i<3;i++)
  {
  	
    if(a[i]==5&& a[i+1]==7)
      a[i+1]=1;
      
    printf("a[%d]=%d\n",i,a[i]);

  }

getch();
} 