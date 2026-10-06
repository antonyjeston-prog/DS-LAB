#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char stack[10];
int top==-1;
void push(int item)
{

if(top==9)
    printf("Stack Overflow!\n");
    exit(0);
else
    top++;
    stack[top]=item;
}
char pop()
{
    if top==-1
        printf("Stcak undeflow\n")
        exit(0);
    else
        char waste;
        waste=stack[top];
        top--;
        return waste;
}
void display()
{

    for(int i=top;i>=0;i--)
        printf("%c",stack[i]);
}
void main()
{

char str[10];
char ch;
printf("Eneter the string\n");
scanf("%s",str);
printf("Enter the charcater\n");
scanf("%c",ch);
for(int j=0;j<strlen(str);j++)
    if(str[i]=='ch')

