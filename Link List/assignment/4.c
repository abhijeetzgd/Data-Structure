/* check whether linnklist is null terminated or ends in cycle
  if cyclic find the start of cycle.
*/

#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *next;
};
/*
void display(struct node *head){

  struct node *p = head;

  do{
      printf("%d ",p->data);
      p=p->next;
    }while(p != NULL);

    printf("\n");
}
*/
int findLenghtCycle(struct node * head){

  struct node* fptr = head,*sptr =head;
  int flag,k=0;

  while(sptr && fptr){
    fptr = fptr->next;
    fptr = fptr -> next;
    sptr = sptr->next;

    if(fptr == sptr) {
      flag = 1;
      break;
    }

    if(fptr == NULL) {
      flag = 0;
      break;
    }

    if(fptr == sptr) {
      flag = 1;
      break;
    }

  }

//  printf("sptr =%d\nfptr = %d\n",sptr->data,fptr->data);

if(flag ==1){
  sptr =head;
  while(sptr != fptr){
    sptr = sptr -> next;
    fptr = fptr -> next;
    k++;
  }
  return k*2;
}else{
  printf("linklist is null terminated\n");
}
}
void main(){

    struct node * head,*second,*third,*four,*five,*six,*seven;
    int isCyclic;
    head = (struct node *) malloc (sizeof(struct node));
    second = (struct node *) malloc (sizeof(struct node));
    third = (struct node *) malloc (sizeof(struct node));
    four = (struct node *) malloc (sizeof(struct node));
    five = (struct node *) malloc (sizeof(struct node));
    six = (struct node *) malloc (sizeof(struct node));
    seven = (struct node *)malloc (sizeof(struct node));

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
    seven -> next = third;
/*
    printf("data elements in linklise\n");
    display(head);
    printf("\n");
*/
    isCyclic= findLenghtCycle(head);
    printf("length of loop = %d\n",isCyclic);
}
