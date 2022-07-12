/*
display linklist from back;
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

void recurDisp (struct node *head){

  if(!head)return;
  recurDisp(head->next);
  printf("%d ",head->data);

}
void main(){

    struct node * head,*second,*third,*four,*five,*six,*seven,*eight,*nine;

    head = (struct node *) malloc (sizeof(struct node));
    second = (struct node *) malloc (sizeof(struct node));
    third = (struct node *) malloc (sizeof(struct node));
    four = (struct node *) malloc (sizeof(struct node));
    five = (struct node *) malloc (sizeof(struct node));
    six = (struct node *) malloc (sizeof(struct node));
    seven = (struct node *)malloc (sizeof(struct node));
    eight = (struct node *)malloc (sizeof(struct node));
    nine = (struct node *)malloc (sizeof(struct node));

    head -> data = 11;
    head -> next = second;

    second-> data = 22;
    second -> next = third;

    third -> data = 33;
    third -> next = four;

    four -> data = 44;
    four -> next = five;

    five -> data = 55;
    five -> next = six;

    six -> data = 66;
    six -> next = seven;

    seven -> data = 77;
    seven -> next = eight;

    eight ->data = 88;
    eight -> next = NULL;

    nine ->data = 99;
    nine -> next = NULL;

    printf("data elements in linklise\n");
    display(head);
    printf("\n");

    recurDisp(head);

    printf("\n");

}
