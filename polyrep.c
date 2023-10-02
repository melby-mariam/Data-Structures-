#include<stdio.h>
struct poly 
{
int coeff;
int expo;
};
void main()
{
int i,n;
printf("Enter the degree of polynomial: ");
scanf("%d",&n);
struct poly p[n];
for(i=0;i<n;i++)
{
printf("Enter the coefficient of term: ");
scanf("%d",&p[i].coeff);
printf("Enter the exponent term: ");
scanf("%d",&p[i].expo);
}
printf("The polynomial is: ");
for(i=0;i<n;i++)
{
if(i<(n-1))
{
printf("%dx^%d+",p[i].coeff,p[i].expo);
}
else if(p[i].expo==0)
{
printf("%d",p[i].coeff);
}
else
{
printf("%dx^%d",p[i].coeff,p[i].expo);
printf("\n");
}
}
}
	
	
