// Program for implementing the stack using Array

#include<stdio.h>
#define max 10 

int push(int a[],int x);
int pop();

int top=-1;
void main()
{
int  data, flag, exit=1,ch,a[max], e,i;

while(1){

printf("Enter your choice  \n \n 1. push \n 2.Pop \n 3.peek \n 4. EXIT \n 5.Print Stack \n : ");
scanf("%d",&ch);
switch(ch)
{
case 1:{
printf("Enter the element to push");
scanf("%d",&e);
flag= push(a ,e);
if(flag==1){
printf("Element is Inserted \n");
break;
}
else
break;
}
case 2:{
data=pop(a);
if(data==0)
break;
printf("%d Is poped !! \n",data);
break;
}
case 3:{
if(top==-1)
printf("There is no elment to peek \n");
else
printf("%d is the top most element\n",a[top]);

break;
}

case 4 :{ exit=0 ; 
break;
}


case 5:{
for(i=0;i<=top;i++)
printf("%d ",a[i]);
printf("\n");
break;
}

default : printf("Wrong choice\n");
}
if(exit==0)
break;
}
}
int push(int a[],int x)
{

if(top==max-1){
printf(" Stack is  FULL Bosdike Aur kitna dalega \n");
return 0;
}
top++;
a[top]=x;
return 1;
}

int pop( int a[]){

if(top==-1){
printf("Pop karne ke liye elements nahi hai bsdk !! \n");
return 0;
} 
top--;
return(a[top+1]);
}
