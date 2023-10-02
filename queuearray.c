#include<stdio.h>
#include<stdlib.h>
void enqueue(int item,int n);
void dequeue();
void display();
int queue[100];
int rear=-1;
int front=-1;
void main()
{
int choice,item,n;
printf("Enter the size of the queue:\n");



scanf("%d",&n);
while(1) {
printf("\nChoose between 1-4:\n1.enqueue\n2.dequeue\n3.display\n4.exit\n");
scanf("%d",&choice);
switch(choice)
{
case 1:printf("Enter the term to be inserted:\n");
scanf("%d",&item);
enqueue(item,n);
break;
case 2:dequeue();
break;
case 3: display();
break;
case 4: exit(0);
break;
default: printf("INCORRECT CHOICE!!");
break;
}
}
}
void enqueue(int item,int n)
{
if(rear==(n-1))
printf("Queue Overflow\n");
else {
if(rear==-1)
{
front=0;
rear=0;
}
else
{
rear++;
}
queue[rear]=item;
}
}
void dequeue()
{	






int item=queue[front];
if(rear==-1||front>rear)
printf("Queue Underflow!!\n");
else
{
front++;
printf("%d Deleted",item);
}
}
void display()
{
if(rear==-1)
printf("Queue Underflow!!\n");
else 
{
printf("-----Queue----");
for(int i=front;i<=rear;i++)
{
printf("\n%d\n",queue[i]);
}
printf("\n------------");
}
}


	
	

