#include<stdio.h>
main()
{
	int i, marks[99],a=0,total=0;
	float f;
	printf("math marks (0 to terminate):");
	
	for(i=0; ; i++)
	{
		scanf("%d",&marks[i]);
		if(marks[i]<=0)
		{
			break;
		}
		a++;
		total+=marks[i];
	}
	f= (float) total / (float)a;
	printf("average marks in maths: %2f\n",f);
}