// A complete working c program for demonstrating all operation on singly lnkedlist

/* this linked list program is without Menu driven option*/
#include<stdio.h>
#include<stdlib.h>
struct Node 
{
int data;
struct Node *next;
};
/*to insert the new node at the front of the list */
void push(struct Node** head_ref, int new_data)
{

/* allocate Node*/
struct Node *new_node=( struct Node*)malloc(sizeof(struct Node));
/* put in the data*/
new_node->data=new_data;
/*make next of new node as head */
new_node->next=(*head_ref);

/* move the head to point to new node*/

(*head_ref)= new_node;

}

/* insert a node after the previos node*/

void insertAfter(struct Node* prev_node, int new_data)
{
/* 1.check if previous node is null*/

if(prev_node==NULL)
{
printf("The given previous node cannot be null");
return;
}
/* 2. allocate a new node*/

struct Node* new_node=(struct Node*)malloc(sizeof(struct Node*));

/*3. put in the data */
new_node->data=new_data;
/* 4.make next of new as next of prev node*/
new_node->next=prev_node->next;
/*5. move the next of prev node as new node*/
prev_node->next=new_node;
}


/*append the new node at the end*/

void append(struct Node** head_ref, int new_data)
{
/*1. allocate new node*/
struct Node* new_node=(struct Node*)malloc(sizeof(struct Node*));
struct Node *last = *head_ref;
/*2.put in the data*/
new_node->data=new_data;
/*3.since new node is the last node make next as NULL*/
new_node->next=NULL;
/*4. if list is empty then make new node as head*/
if(*head_ref==NULL)
{
*head_ref=new_node;
return;
}

/*5. else traveel till the last of list*/
while(last->next!=NULL)
last=last->next;

/*6. change the next of last node*/

last->next=new_node;
return;
}


// function to print linked list
void printlist(struct Node* node)
{
while(node!=NULL)
{
printf(" %d ",node->data);
node=node->next;
}
}


/*main program to test above functions*/
int main()
{

struct Node *start,*head=NULL;
//insert 9
append(&head, 9);
append(&head, 10);
append(&head, 50);
append(&head, 10);
push(&head,70);
append(&head, 80);

struct Node *prev ;
prev=head;
while(prev->data!=50)
prev=prev->next;
insertAfter(prev,100);
printlist(head);


}

