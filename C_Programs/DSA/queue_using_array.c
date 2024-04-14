// Queue using array
#include<stdio.h>
#define maxsize 10
int q[maxsize],rear = -1,front =0;
void insert();
void delete();
void display();
int main()
{
	
	int ch;
	do
	{
		printf("\n-----Queue-----\n");
		printf("Press 1 for insert element into Queue\n");
		printf("Press 2 for delete element from Queue\n");
		printf("Press 3 for display elements from Queue\n");
		printf("Press 4 for Exit\n");
		printf("Enter your choice:");
		scanf("%d",&ch);
		
		switch(ch)
		{
			
			case 1: insert();break;
			case 2: delete();break;
			case 3: display();break;
			case 4: break;
			default: printf("Invalid choice:");
			
		}
	}
	while(ch!=4);
	return 0;
}

void insert()
{
	int n;
	if(rear==(maxsize-1))
	{
		printf("\nQueue");
	}
	else
	{
		printf("Enter a value:");
		scanf("%d",&n);
		rear++;
		q[rear]=n;
	}
}

void delete()
{
	if(rear<front)
	{
		printf("\nQueue underflow");
	}
	
	else
	{
		printf("Deleted data =%d\n",q[front]);
		front++;
	}
	
}

void display()
{
	if(rear<front)
	{
		printf("\nQueue underflow\n");
	}
	
	else
	{ 
	    int i;
		for(i=front;i<=rear;i++)
		{
			printf("%d",q[i]);
		}
	}
}