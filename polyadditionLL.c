#include<stdio.h>
#include<stdlib.h>
struct Node 
{
int coeff;
int pow;
struct Node* next;
};
void readpoly( struct Node** poly)
{
int coeff,exp,cont;
struct Node*temp = (struct Node*)malloc(sizeof(struct Node));
*poly = temp;
printf("\nEnter no of terms:");
int no;
scanf("%d",&no);
int i=0;
while(i<no)
{
printf("\nenter the coeff\t");
scanf("%d",&coeff);
printf("\nenter the expo\t");
scanf("%d",&exp);
temp->coeff= coeff;
temp->pow= exp;
temp->next= NULL;
if(i==no-1)
break;
temp->next=(struct Node*)malloc(sizeof(struct Node));
temp=temp->next;
temp->next=NULL;
i++;
}
}
void displaypoly(struct Node*poly)
{
printf("\npolynomial expression:");
while (poly!=NULL)
{
if(poly->coeff!=0)
{



if(poly->pow!=0)
printf(" %d(x^%d)",poly->coeff,poly->pow);
else
printf(" %d",poly->coeff);
}
poly=poly->next;
if(poly!=NULL)
{
if(poly->coeff>0)
printf(" +");
}	
}
} 
void addpoly(struct Node** result, struct Node*first,struct Node*second )
{
struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
temp->next=NULL;
*result=temp;
while(first&&second)
{
if (first->pow > second->pow)
{
temp->pow = first->pow;
temp->coeff = first->coeff;
first = first->next;
}
else if (first->pow < second->pow) 
{
temp->pow = second->pow;
temp->coeff = second->coeff;
second = second->next;
}
else 
{
temp->pow = first->pow;
temp->coeff = first->coeff +second->coeff;
first = first->next;
second = second->next;
}
if(first&&second)
{
temp->next=(struct Node*)malloc(sizeof(struct Node));
temp=temp->next;



temp->next=NULL;
}
}
while(first||second)
{
temp->next=(struct Node*)malloc(sizeof(struct Node));
temp=temp->next;
temp->next=NULL;
if(first)
{
temp->coeff=first->coeff;
temp->pow=first->pow;
first = first->next;
}
else if(second)
{
temp->coeff=second->coeff;
temp->pow=second->pow;
second = second->next;
}
}
}
void orderpoly(struct Node*ptr)
{
struct Node*i,*j;
//ptr=ptr->next;
i=ptr;
j=ptr;
int tempc, tempe;
while(i->next!=NULL)
{
j=ptr;
while(j->next!=NULL)
{
if(j->pow<j->next->pow)
{
tempc=j->coeff;
tempe=j->pow;
j->coeff=j->next->coeff;
j->pow=j->next->pow;
j->next->coeff=tempc;
j->next->pow=tempe;
}



j=j->next;
}
i=i->next;
}
}
int main()
{
struct Node*first= NULL;
struct Node*second= NULL; 
struct Node*result= NULL;
printf("\nthe polynomial 1");
readpoly(&first);
printf("\nthe polynomial 2");
readpoly(&second);
orderpoly(first) ;
orderpoly(second) ;
addpoly(&result,first,second);
displaypoly(first);
displaypoly(second);
displaypoly(result);
return 0;
}
	



