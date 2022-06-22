#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
	struct node *front;
	struct node *rear;
	void main()
	{
		int ch;
		while(1)
		{
			printf("\n1.Insert\n2.Delete\n3.Display\n4.Findthefront\n5.Findtherear\n6.Exit\n");
			printf("Enter the choice:");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:
				{
					struct node *ptr;
					int entry;
					printf("enter the data:");
					scanf("%d",&entry);
					ptr=(struct node *)malloc(sizeof(struct node));
					if(ptr==NULL)
					{
						printf("Overflow\n\n");
					}
					else
					{
						ptr->data=entry;
						if(front==NULL)
						{
							front=ptr;
							rear=ptr;
							front->next==NULL;
							rear->next=NULL;
						}
						else
						{
							rear->next=ptr;
							rear=ptr;
							rear->next=NULL;
						}
					}
			}break;
				case 2:
				{
					struct node *ptr;
					ptr=(struct node *)malloc(sizeof(struct node));
					if(front==NULL)
					{
						printf("\n\nUnderflow\n\n");
					}	
					else 
					{
						ptr=front;
						printf("Element deleted is %d",front->data);
						front=front->next;
						free(ptr);
					}
				}break;
				case 3:
				{
					struct node *ptr;
					ptr=front;
					if(front==NULL)
					{
						printf("Empty queue");
					}
					else
					{		
						printf("Elements are \n");
						while(ptr!=NULL)
						{
							printf("%d\n\n",ptr->data);
							ptr=ptr->next;
						}
					}
				}break;
				case 4:
				{
					printf("Element at the front is %d",front->data);
					break;
				}
				case 5:
				{
					printf("Element at the rear end is %d",rear->data);
					break;
				}
				case 6:
				{
					printf("Exiting............\n");
					exit(0);
				}
				break;
				default:
				{
					printf("Invalid choice ");-
					printf("\n");
				}
				
			}
		}
	}



	
		
