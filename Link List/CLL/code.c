#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node * next;

};

int printDetail(struct node *head){
  int cnt=0;

  struct node *temp = head;
  do{
    printf("%d -> ",temp->data);
    temp = temp->next;
    cnt++;
  }while(temp!=head);
  printf("%d... \n",head->data);
  return cnt;
}

void main(){
  int n;
struct node *head,*second,*third,*fourth,*fifth;

head = (struct node*)malloc(sizeof(struct node));
second = (struct node*)malloc(sizeof(struct node));
third = (struct node*)malloc(sizeof(struct node));
fourth = (struct node*)malloc(sizeof(struct node));
fifth = (struct node*)malloc(sizeof(struct node));

head->data = 10;
head ->next = second;

second->data = 20;
second ->next = third;

third->data = 30;
third ->next = fourth;

fourth->data = 40;
fourth ->next = fifth;

fifth->data = 50;
fifth ->next = head;

n =printDetail(head);
}
