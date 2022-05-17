#include<stdio.h>
#include<conio.h>

int main()
{
  int a[10],i,n,f ;
  printf("enter the number of array :\n");
  scanf("%d",&n);
  
  printf("enter the array\n");
  for(i=0;i<=n;i++)
  {
  printf("a[%d]= ",i);
  scanf("%d",&a[i]);
  }
  
  for(i=0; i<=n-3; i++)
  {
  if(a[i] == (a[i+1]-1) && a[i]==a[i+2]-2)
  {
  printf("true");
  }
  
  else
  {
  printf("false");
  }
  }
  getch();
  }