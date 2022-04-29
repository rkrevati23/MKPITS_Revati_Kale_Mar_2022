#include<stdio.h>
#include<conio.h>
void add();
int main()
{

 add();
}

void add()

{
  int num1,num2,sum;
  printf("enter the number\n");
  scanf("%d",&num1);
  printf("enter the number\n");
  scanf("%d",&num2);
  
  sum=num1+num2;
  printf("addition=%d",sum);
}