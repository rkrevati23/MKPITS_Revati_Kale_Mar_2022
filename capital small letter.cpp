#include<stdio.h>
int main()
{
	char a;
	printf("enter the charecter");
	scanf("&c",&a);
	
if(a>='A' && a<='Z')	
{
      printf("charecter is a capital letter");
}
else
if(a>='a' && a<='z')	
{
	printf("charecter is a small letter");
}
else
if(a>='0' && a<='9')
{
	printf("charecter is a digit");
}
else
{
	printf("charecter is a special symbol");
}
}