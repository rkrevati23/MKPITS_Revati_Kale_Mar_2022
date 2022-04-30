#include<stdio.h>
int main()
{
	float principle_amt,rate_of_interest,days,interest;
	int yearInDays=365;
	
	printf("loan ammount (0 to quit)");
	scanf("%f",&principle_amt);
	
	while(principle_amt !=0)
	{
		printf("\ninterest rate");
		scanf("%f",&rate_of_interest);
		
		printf("\nthe loan in day");
		scanf("%f",&days);
		
		interest=(principle_amt*rate_of_interest*days)/yearInDays;
		printf("the interest amt : %.2f\n",interest);
		
		printf("\n loan principle_amt(0 top quit)");
		scanf("%f",&principle_amt);
		
	}
}