#include<stdio.h>
void main()
{
int n,i,num,flag=0,count=0;
count++;
count++;
printf("Enter he limit of the array: ");
count++;
scanf("%d",&n);
count++;
int a[n];
printf("Enter the elements of the array: ");
count++;
for(i=0;i<n;i++)
{
count++;
scanf("%d",&a[i]);
count++;
}
count++;

printf("Enter the element to be searched: ");
count++;
scanf("%d",&num);
count++;
for(i=0;i<n;i++)
{
count++;
count++;
if(num==a[i])
{
printf("The position of the element is : %d",i+1);
count++;
flag=1;
count++;
break;
}
}
count++;
if(flag==0)
{
printf("Element not found!!");
count++;
}
count++;

printf("\nSpace complexity is : %d",20+(n*4));
count++;
printf("\nTime complexity is : %d",++count);
}   
