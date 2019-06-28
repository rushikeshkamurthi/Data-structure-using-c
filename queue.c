#include<stdio.h>
#define max 10

void enqeue(int a[]);
void deqeue(int a[]);
int front=-1, rare=-1;
int main(){

int ch,exit=0,a[max],data,i;
while(1)
{

printf("Enter your choice \n 1.Enqeue \n 2.Dequeue \n 3.peek \n 4.exit \n ");

scanf("%d",&ch);

switch(ch){

case 1: enqeue(a);
	break;
case 2: deqeue(a);
	break;
case 3: {
if(front-1)
{
printf(" No elements to peek \n ");
break;
}
printf("%d is elment at front \n",a[front]);
break;
}

case 4: return 0 ;
break;
}
}
}
void enqeue (int a[])
{
int data;
if(front==-1)
front++;
rare++;
if(rare>max-1)
{
printf("queue is already full\n");
return;
}
printf("\n Enter the data element to be added : ");
scanf("%d",&data);
a[rare]=data;
printf("%d is added \n", a[rare]);
return;
}

void deqeue(int a[])
{
if(front==-1){
printf("No element is queue \n");

return;
}
else if(front==rare){
printf("%d is removed",a[front]);
front=rare=-1;
return;
}
else 
{
printf("%d is removed \n",a[front]);
front++;
return;
}

}
