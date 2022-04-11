#include<stdio.h>
main()
{
	
	float hour,amt,salary;
	char id;
	printf("/n enter employed id");
	scanf("%c",&id);
	
	printf("/n total work hours");
	scanf("%f",&hour);
	
	printf("/n amt is  per hours");
	scanf("%f",&amt);
	
	salary=hour*amt;
	printf("total salary=%d",salary);
}