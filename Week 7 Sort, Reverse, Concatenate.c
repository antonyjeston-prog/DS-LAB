#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
 void create( struct node **head)
 {

     struct node *newnode, *temp;
     int choice=1;
     while(choice)
     {

           newnode=(struct node*)malloc(sizeof(struct node));

          printf("Enter the Data:\n");
           scanf("%d",&newnode->data);

           newnode->next=NULL;

           if(*head==NULL)
           {
               *head=temp=newnode;

           }
           else
           {



                   temp->next=newnode;
                   temp=newnode;
           }
           printf("Do you want to continue(0/1)?");
           scanf("%d",&choice);
     }

 }
 void sort(struct node *head){
 struct node *i,*j;
 int temp;
 for(i=head;i!=NULL;i=i->next)
    {
        for(j=i->next;j!=NULL;j=j->next)
        {


            if(i->data==j->data)
                {
                    temp=i->data;
                    i->data=j->data;
                    j->data=temp;
                }

        }
    }
 }

 struct node *reverse(struct node *head)
 {

     struct node *prev=NULL;
     struct node *current=head;
     struct node *next=NULL;
     while(current!=NULL)
     {

         next=current->next;
         current->next=prev;
         prev=current;
         current=next;
     }
     return prev;
 }

 struct node *concatenate(struct node *head1, struct node *head2)
 {
     struct node *temp;
     if(head1==NULL)
     {
         return head2;

     }
     temp=head1;
     while(temp->next!=NULL)
     {

         temp=temp->next;
         temp->next=head2;
         return head2;
     }

 }
 void display(struct node *head)
 {
     if(head==NULL)
     {
         printf("\nList is empty");
         return;

     }
     struct node *temp= head;
     while(temp->next!=NULL)
     {
         printf("%d ",temp->data);
         temp-temp->next;
     }
     return;
 }

int main()
 {
     struct node *head=NULL;
     struct node *head2=NULL;
     int choice;
     printf("--MENU--\n");
     printf("1. CREATE\n");
     printf("2. SORT\n");
     printf("3. REVERSE \n");
     printf("4. CONCATENATE\n");
     printf("5. DISPLAY \n");

     do
     {
         printf("Enter The Choice\n");
         scanf("%d", &choice);
         switch(choice)
         {
         case 1:
            create(&head);
            break;
         case 2:
            sort(head);
            break;
         case 3:
            head=reverse(head);
            break;
         case 4:
            create(&head2);
            head=concatenate(head,head2);
            break;
         case 5:
             display(head);
             break;
         default :
            printf("Invalid Choice\n");


         }
    }while(1==1);
    return 0;
}






