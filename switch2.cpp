#include<stdio.h>
#include<conio.h>
int main()
{
    int num1,num2,res, choice;
    printf("enter 1or2or3");
    scanf("%d",choice);
    switch(2)
 {
    case 1:
    printf("addition of two number");
    scanf("%d%d",&num1,&num2);
    res=num1+num2;
    printf("res=%d",res);
 break;
   
     case 2:
	   printf("enter two number ");
    scanf("%d%d",&num1,&num2);
    res=num1-num2;
    printf("res=%d",res);
 break;
 
    default:
    printf("i am in default");
   }
}
	 	