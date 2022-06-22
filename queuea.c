#include<stdlib.h>
#include<stdio.h>
#define n 5
int front =-1;
int rear=-1;
int queue[n];
void main()
{
	while(1)
	{
		int ch,i;
		printf("\n1.Enqueue \n2.Dequeue\n3.Display\n4.Find the front\n5.Find the end \n6.Exit\n");
		printf("Enter your choice :");
		scanf("%d",&ch);
		switch(ch)
		{
			 case 1:
			{
				int entry;
				if(rear==n-1)
				{
					printf("\n\nOverflow");
				}
				else
				{
					if(front==-1)
					front=0;
					printf("Enter the data:");
					scanf("%d",&entry);
					rear=rear+1;
					queue[rear]=entry;
				}
				break;
			}
			case 2:
			{
				if(front==-1||front>rear)
				{
					printf("Underflow");		
				}
				else
				{
					printf("\nElements deleted %d\n",queue[front]);
					front=front+1;
				}
				break;
			}
			case 3:
			{
				if(front==-1||front>rear)
				{
					printf("\n Queue is empty");
				}
				else
				{
					printf("Elements are\n");
					for(i=front;i<=rear;i++)
					{
						printf("%d\n",queue[i]);
					}
				}break;
			}
				case 4:
				{
						printf("\nThe element at the front end is %d",queue[front]);
						break;
					}
				break;
				case 5:
				
					{
						printf("\nElement at the rear end is %d",queue[rear]);
					}
				break;
				case 6:
				{
					printf("\nExiting......");
					exit(0);
				}
				break;
				default:
				{
					printf("Invalid Choice \n");
				}
			}
		}
	}
