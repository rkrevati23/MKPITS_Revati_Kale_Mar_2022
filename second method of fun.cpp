#include<stdio.h>
#include<conio.h>
//void mul();
void mul()
{

 
 int num1,num2,res;
  printf("enter the number\n");
  scanf("%d",&num1);
  
  printf("enter the number\n");
  scanf("%d",&num2);
  
  res=num1*num2;
  printf("multiplication=%d\n",res);
 
  getch();
}
void div()
{
    
  int num1,num2,res;
  printf("\nenter the number\n");
  scanf("%d",&num1);
  
  printf("enter the number\n");
  scanf("%d",&num2);
  
  res=num1/num2;
  printf("\ndivition=%d",res);
 
  getch();
}
int main()
{
	mul();
	div();
}


