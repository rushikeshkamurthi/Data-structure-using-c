/*program for linked list with all 3 types of insertion and deleting the specified element*/
/*if find any error then mail me @ k.hrushikesh007@gmail.com*/


#include<stdio.h>
#include<stdlib.h>
struct Node		//strucure defination to be used
{
int data;
struct Node *next;
};

void Beginning(struct Node **head, int new_data)     // function for appending the element in the begining
{
struct Node *new_node=(struct Node*)malloc(sizeof(struct Node));  // allocation of the memory of size of struct type node 
					/*store data to the node */
new_node->data=new_data;      // here we store the data recieved in parameter to data part of structure
				/* check if likedlist is empty*/
if(*head==NULL){
*head=new_node;
new_node->next=NULL;
}else{  			//point the next of the new node to head 

new_node->next=*head;
*head=new_node;
}
}


void mid(struct Node **Head)
{
int ele;
struct Node *new_node=(struct Node*)malloc(sizeof(struct Node));
printf("Enter the data element to add");
scanf("%d",&new_node->data);

if(*Head==NULL)   // to check if list is empty then directly make head point to the new node
{
*Head=new_node;
printf("No element in the list");
return;
}
printf("Enter after which element you want to add"); // else ask your for element after which he want to store the new element 
scanf("%d",&ele);
struct Node *prev;
prev=*Head;


while(prev->next!=NULL)  // search for the element enter by your 
{
if(prev->data==ele)
{
new_node->next= prev->next;
prev->next= new_node;
printf("Element inserted");
return;
}
prev=prev->next;
}
printf("element cant be inserted no element fount ");
}

void end(struct Node **Head){
struct Node *new_node=(struct Node*)malloc(sizeof(struct Node));
printf("Enter the data element");
scanf("%d",&new_node->data);
new_node->next=NULL;
if(*Head==NULL)
{
*Head=new_node;
return;
}
struct Node *last;
last=*Head;
while(last->next!=NULL)
last=last->next;

last->next=new_node;

}

void delete(struct  Node **Head)
{
int data;

if(*Head==NULL)
{
printf("No element to delete");
return;
}
printf("Enter the element to be deletd");
scanf("%d",&data);
struct Node *temp=*Head, *prev;
if(temp!=NULL && temp->data==data)
{
printf("%d is removed",temp->data);
*Head=temp->next;
free(temp);
return;
}
while(temp!=NULL&&temp->data!=data)
{
prev=temp;
temp=temp->next;
}
if(temp==NULL)
{
printf("Element not found");
return;
}
prev->next=temp->next;
printf("%d is removed ",temp->data);
free(temp);
}
void printlist(struct Node *Head)
{
if(Head==NULL)
{
printf("NO element");
return;
}

while(Head!=NULL)
{
printf(" %d ",Head->data);
Head=Head->next;
}
}
void main(){
int ch, data;
struct Node *Head=NULL;
struct Node *Loop1,*Loop2;
printf("Program for Linkhed list");
do{
printf("\n 1. Append in the begining \n 2. Append at the mid  \n 3. Append at the End  \n 4. printf list \n 5. Delete element  \n 6. Sort list \n 7.Exit \n Select your choice : ");
scanf("%d",&ch);
switch(ch){
case 1 : {
printf("Enter the data item");
scanf("%d",&data);
Beginning(&Head,data);
} 
break;
case 2: mid(&Head);
break;
case 3: end(&Head);
break;
case 4 :printlist(Head);	
break;
case 5: delete(&Head);
break;
}
}while(ch!=7); 
}



