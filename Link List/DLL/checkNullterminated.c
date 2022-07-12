#include<stdlib.h>

#include<stdio.h>

struct node{
  int data;
  struct node *next;
};

void show_linklist(struct node *head){
  struct node *temp = head;
  while(temp!=NULL){
    printf("%d -> ",temp->data);
    temp=temp->next;
  }
  printf("NULL\n" );
}

int check_null_or_not(struct node *head){

  struct node *slow,*fast;
  slow=head;
  fast=head;

  while(fast!=NULL){
    fast=fast->next;
    if(fast==NULL){
      return 0;
    }
    if(fast==slow)
    return 1;

    fast=fast->next;
    if(fast==slow){
      return 1;
    }

    if(fast==NULL){
      return 0;
    }

    slow = slow -> next;
  }
}

void main(){

struct node*first,*second,*third,*head,*four,*five,*six,*seven;

first = (struct node *)malloc(sizeof(struct node));
second = (struct node *)malloc(sizeof(struct node));
third = (struct node *)malloc(sizeof(struct node));
four = (struct node *)malloc(sizeof(struct node));
five = (struct node *)malloc(sizeof(struct node));
six = (struct node *)malloc(sizeof(struct node));
seven = (struct node *)malloc(sizeof(struct node));

head = first;

first->data =10;
first->next = second;

second->data =20;
second->next = third;

third->data = 30;
third->next = four;

four->data =40;
four->next = five;

five->data = 50;
five->next = six;

six->data = 60;
six->next = seven;

seven -> data =70;
seven -> next = NULL;

//show_linklist(head);
int y=check_null_or_not(head);
if(y){
  printf("linklist is cyclic\n");
}
else{
  printf("linklist is Null terminated\n");
}
}
