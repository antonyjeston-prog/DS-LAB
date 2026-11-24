#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
struct node *top=NULL;
void push(int value)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {

        printf("Memory Allocation Failed\n");
        return;

    }
    newnode->data=value;
    newnode->next=top;
    top=newnode;
    printf("%d is inserted\n",value);
    return;

}
void pop()
{

    struct node *temp;
    if(top==NULL)
    {

        printf("Stack is Empty\n");
        return;
    }
    temp=top;
    printf(" %d is Popped\n", temp->data);
    top=top->next;
    free(temp);
    }
void display(struct node *head)
{
    struct node *temp;
    if(top==NULL)
    {
        printf("Stack Overflow");
        return;

    }
    temp=top;
    while(temp!=NULL)
    {
        printf("%d \t",temp->data);
        temp=temp->next;
    }
    }

 int main()
 {
      struct node *head=NULL;
      int choice,value;
     printf("\n--MENU--\n");
     printf("1. PUSH\n");
     printf("2. POP\n");
     printf("3. DISPLAY \n");
     printf("4. EXIT\n");

     do
     {
         printf("\nEnter The Choice\n");
         scanf("%d", &choice);
         switch(choice)
         {
         case 1:
             printf("Enter the data\n");
             scanf("%d",&value);
            push(value);
            break;
         case 2:
            pop();
            break;
         case 3:
            display(head);
            break;
         case 4:
            exit(0);
         default:
            printf("Invalid Choice\n");
         }
     }while(1==1);

 }
