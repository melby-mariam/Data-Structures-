#include<stdio.h>
void main()
{
int i,left,right,middle,n,binary,temp,count=0;
count++;
printf("Enter the limit of the array: ");
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
scanf("%d",&binary);
count++;
left=0;
count++;
right=n-1;
count++;
middle=(left+right)/2;
count++;
while(left<=right)
{
count++;
count++;
if(a[middle]<binary)
{
left=middle+1;
count++;
}
else if(a[middle]==binary)
{
printf("\n%d found at location %d", binary, middle+1);
count++;

count++;
break;
}
else
{
right=middle-1;
count++;
}      	
middle=(left+right)/2;
count++;
}
if(left>right)
{
printf("\nNot found! %d isn't present in the list", binary);
count++;
count++;
}
count++;
printf("\nThe Space complexity is %d",28+(4*n));
count++;
printf("\nThe Time complexity is %d",++count);
}
 
 
