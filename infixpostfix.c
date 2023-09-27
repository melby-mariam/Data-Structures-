#include<stdio.h>
#include<ctype.h>
void push(char x);
char pop();
int priority(char x);
char stack[100];
int top=-1;
void main()
{
char exp[50],c,*e;
printf("Enter the expression : \n");
scanf("%s",exp);
e=exp;
while(*e!='\0')
{
if(isalnum(*e))
printf("%c",*e);
else if(*e=='(')
push(*e);
else if(*e==')')
{
while((c=pop())!='(')
{
printf("%c",c);
}
}
else
{
while(priority(stack[top])>=priority(*e))
{
if(*e=='^')
{
break;
}
printf("%c",pop());
}



push(*e);
}
e++;
}
while(top!=-1)
{
printf("%c",pop());
}
}
void push(char x)
{
stack[++top]=x;
}
char pop()
{
if(top==-1)
return -1;
else
return stack[top--];
}
int priority(char x)
{
if(x=='(')
return 0;
else if(x=='+'||x=='-')
return 1;
else if(x=='*'||x=='/')
return 2;
else if(x=='^')
return 3;
return 0;
}   

