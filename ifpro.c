#include<stdio.h>
#include<conio.h>
void main()
{
int num,r;
 printf("enter number /n"); 
scanf("%d",&num);
r=num%4;
if (r==0)
{
printf("number divisible by 4");
}
if(r!=0)
{
printf("number is not divisible by 4");
}
getch();
}