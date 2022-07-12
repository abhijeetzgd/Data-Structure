/*
find the nth node from end of linklist
*/
#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *next;
};

void display(struct node *head){

  struct node *p = head;

  do{
      printf("%d ",p->data);
      p=p->next;
    }while(p != NULL);

    printf("\n");
}

struct node * findLengthFromLastNode(struct node *head,int pos ){
  struct node *a = head,*b = head;
  int k=0;
  while(k<pos){
    a = a-> next;
    k++;
  }
  while(a!=NULL){
    a = a-> next;
    b = b-> next;
    k++;
  }
  if(pos<=k)
  return b;
  else return NULL;
}

void main(){

    struct node * head,*second,*third,*four,*five,*six,*NthNode;

    head = (struct node *) malloc (sizeof(struct node));
    second = (struct node *) malloc (sizeof(struct node));
    third = (struct node *) malloc (sizeof(struct node));
    four = (struct node *) malloc (sizeof(struct node));
    five = (struct node *) malloc (sizeof(struct node));
    six = (struct node *) malloc (sizeof(struct node));
    NthNode = (struct node *)malloc (sizeof(struct node));

    head -> data = 71;
    head -> next = second;

    second-> data = 20;
    second -> next = third;

    third -> data = 33;
    third -> next = four;

    four -> data = 84;
    four -> next = five;

    five -> data = 75;
    five -> next = six;

    six -> data = 64;
    six -> next = NULL;

    printf("data elements in linklise\n");
    display(head);
    printf("\n");

    int pos;
    printf("Enter the node number which you want to search from last\n");
    scanf("%d",&pos);
    NthNode=findLengthFromLastNode(head,pos);
    if(NthNode)
    printf("value at that node = %d\n",NthNode->data);
    else printf("NULL");
}
