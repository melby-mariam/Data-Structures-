#include <stdio.h>
void main()
{
int n,i,j,temp,position,space,count=0;
count++;
printf("Enter the limit:");
count++;
scanf("%d", &n);
count++;
int a[n];
printf("Enter the elements:");
count++;
count++;
for (i = 0; i < n; i++)
{
scanf("%d", &a[i]);
count++;
}
count++;
count++;

for(i = 0; i < n - 1; i++)
{
count++;
position=i;
count++;
for(j = i + 1; j < n; j++)
{
if(a[position] > a[j])
position=j;
count++;
}
count++;
}
temp=a[position];
count++;
a[position]=a[i];
count++;
a[i]=temp;
count++;
}
count++;
printf("Sorted Array:");
count++;
count++;
for(i = 0; i < n; i++)

{
count++;
printf("%d\t",a[i]);
}
count++;
space=(4*7+(4*n));
count++;
printf("\nThe space complexity is %d",space);
printf("\nThe time complexity is %d",count++);
}
printf("\nThe space complexity is %d",space);
printf("\nThe time complexity is %d",count++);
}
