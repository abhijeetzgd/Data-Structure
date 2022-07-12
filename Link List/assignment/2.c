/* check whether linnklist is null terminated or ends in cycle*/

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

int checkCyclic(struct node * head){

  struct node* fptr = head,*sptr =head;

  do{
    fptr = fptr->next;
    if(fptr == sptr) return 1;
    if(fptr == NULL) return 0;
    fptr = fptr -> next;
    if(fptr == sptr) return 1;
    sptr = sptr->next;
  }while(1);

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
    six -> next = seven;

    seven -> data = 77;
    seven -> next = NULL;

    printf("data elements in linklise\n");
    display(head);
    printf("\n");

    isCyclic = checkCyclic(head);
    if(isCyclic){
      printf("Linklist terminated in cycle.\n");
    }else{
      printf("Linklist terminated in NULL.\n");

    }
}
