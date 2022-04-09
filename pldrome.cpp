#include<stdio.h>
main()
{
int num,n1,n2,n3,rev,original;
printf("enter three digit number");
scanf("%d",&num);
original=num;
n1=num%10;
num=num/10;
n2=num%10;
num=num/10;
n3=num;
rev=n1*100+n2*100+n3*100;
printf("reverse of digit number=%d",rev);
if(original==rev)
{
printf("a palindrome number");
}
 else
{
printf("not palindrome number");
}
}