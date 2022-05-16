#include<stdio.h>
#include<conio.h>

int main()
{
   int a[100];
   int i,j,n,temp;
    
   printf("enter the array number n= \n");
   scanf("%d",&n);
   
   printf("enter the array\n");
for(i=0; i<n; i++)
{
   printf("a[%d]= ",i);
   scanf("%d",&a[i]);
}
   printf("affter sorting new array are\n");
for(i=0; i<n; i++)
{
for(j=0; j<n; j++)
  {
	
 if(a[i] > a[j])
   {
     temp=a[i];
     a[i]=a[j];
     a[j]=temp;
    }
  }
}
 
for(i=0; i<n; i++)
{
  printf("a[%d]= %d\n",i,a[i]);
}
getch();
}