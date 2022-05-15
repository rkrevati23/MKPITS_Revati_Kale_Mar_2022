#include<stdio.h>
#include<conio.h>

int main()
{
int i,sp,j;

for(i=1;i<=4;i++)
{
for(sp=1;sp<=41-i;sp++)
{
 printf(" ");
 }
 for(j=1;j>=i*2-1;j++)
 {
 printf("%d",j);
 }
 printf("\n");
 }
 getch();
}