#include<stdio.h>
#include<conio.h>

#include<conio.h>

int main()
{
  int a[10],i,n,f ;
  printf("enter the number of array \n");
  scanf("%d",&n);
  
  printf("enter the array\n");
  for(i=0;i<n;i++)
  {
  printf("a[%d]= ",i);
  scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
  if(a[i]!=a[n-f+i])
  {
  printf("true");
  break;
  }
  else
  {
  printf("false");
  break;
  }
  }
  getch();
  }