#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int i, x,choice;
int que[5],front=-1,rear=-1,n=5;

	void enque()
	{
		if (rear==n-1)
		printf("overflow");
		else
		if (front==-1 && rear==-1)
		{
			front=rear=0;
			que[rear]=x;
		}
		else
		rear++;
		que[rear]=x;
	
	printf("enter your choice:\n");
	scanf("%d",&choice);
   }
   void deque()
   {
   	if(front==-1 && rear==-1)
   	printf("queue is empty");
   	else if(front==rear);
   	else
   	printf("%d removed",que[front]);
   	
   }
   
   void dis()
   {
   	
   	for(i=front; i<=rear; i++); 
    {
   		printf("%d",que[i]);
    }
   }
   
   int main()
{
	int choice;
	while(1)
	{
	printf("press 1 for enque\n");
	printf("press 2 for deque\n");
	printf("press 3 for display\n");
	printf("press 4 for exit\n");
	printf("\n");
	printf(" enter your choice\n");
	scanf("%d",&choice);
	switch(choice)	
	{
		case 1:
		printf("enter iteam to add\n");
		scanf("%d",&x);
		enque();
		break;
		
		case 2:
		deque();
		break;	
		
		case 3:
		dis();
		break;	
		
		case 4:
		exit(0);
		break;
			
		default:
		printf("invalid input")	;
    }
		
			
	}
	}
