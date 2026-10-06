#include<stdio.h>
#include<stdlib.h>
#define max 4
int queue[max];
int front=-1;
int rear=-1;
int i;
void insert(int ele)
{
    if(rear==max-1)
    {
        printf("Queue Overflow, Insertion Failed!1");
    }
    else
    {
        if(front==-1)
           front=0;
        rear++;
        queue[rear]=ele;
        printf("Insertion Complete\n \n");
    }
}
void Delete()
{
    if(front==-1 || front>rear)
    {
        printf("Queue Underflow, Deleteion Failed!\n \n");
    }
    else
    {
        printf("Deleted element is %d \n \n ", queue[front]);
        front++;
    }
}
void display()
{
    if(front==-1 || front>rear)
    {
        printf("Queue Empty, Nothing to Display!!\n");

    }
    else
    {
        printf("QUEUE : \n");
        for(i=front; i<=rear;i++)
        {
            printf("%d ",queue[i]);
            printf("\n");
        }
    }
}
int main()
{
    int choice,element;
    int g=1;
    printf("MENU \n");
    printf("To Insert into the Queue- CLICK 1\n");
    printf("To Delete from Queue-CLICK 2\n");
    printf("To Display the elements of Queue-CLICK 3\n");
    printf("To Exit-CLICK 4 \n");

    while(g<100)
    {
        printf("Enter your choice:\n");
        scanf("%d", &choice);
        switch(choice)
        {
          case 1:
            {
              printf("Enter element to insert\n");
              scanf("%d",&element);
              insert(element);
              break;
            }
          case 2:
            {
                Delete();
                break;
            }
          case 3:
            {
                display();
                break;
            }
          case 4:
            {
              printf("Exiting Program- THANK YOU:-)\n");
              exit(0);

            }
        }
        g++;
     }
return (0);
}
