#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *next;
  struct node *prev;
};

void display(struct node *head){

  struct node *p = head;

  do{
      printf("%d ",p->data);
      p=p->next;
    }while(p != NULL);

    printf("\n");
}

void displayRev(struct node *head){

  struct node *p = head;
do{


  p=p->next;
}while(p->next!=NULL);

  do{
      printf("%d ",p->data);
      p=p->prev;
    }while(p != NULL);

    printf("\n");
}

struct node * add1(struct node*head,int data){

  struct node * temp = (struct node *)malloc (sizeof(struct node));

  printf("Before inserting element at first pos %d \n",data);
  display(head);
  printf("\n");

  temp->data = data;

  temp ->next = head;
  temp ->prev = NULL;
  head = temp;

  printf("After inserting element at first pos %d \n",data);
  display(head);
  printf("\n");
  displayRev(head);

  return head;

}

struct node * addMid(struct node * head,int data,int index){

  printf("Before inserting element at '%d' pos %d \n",index,data);
  display(head);
  printf("\n");

  struct node * temp = (struct node *)malloc (sizeof(struct node));
  temp->data = data;

  struct node * p = head;
  int i=0;

  while(i<index-1){
      p=p->next;
      i++;
  }

  temp->next = p->next;
  temp->next->prev = temp;
  p->next = temp;
  temp->prev = p;


  printf("After inserting element at '%d' position with %d \n",index,data);
  display(head);
  printf("\n");

  return head;

}

struct node * addend(struct node* head,int data){

  printf("Before inserting element at last pososition %d \n",data);
  display(head);
  printf("\n");

  struct node * temp = (struct node *)malloc (sizeof(struct node));
  temp->data = data;

  struct node * p = head;

  do{
    p=p->next;
  }while(p->next!=NULL);

  p->next = temp;
  temp->next = NULL;
  temp->prev = p;

  printf("After inserting element at last position with %d \n",data);
  display(head);
  printf("\n");

  return head;

}

struct node * del1(struct node *head ){
  printf("deleting first element\n");
  display(head);
  printf("\n");
  struct node *temp = head;

  head = temp-> next;
  free(temp);

  printf("After deletingg element at first position \n");
  display(head);
  printf("\n");
  return head;

}

struct node * delmid(struct node * head,int index){

  printf("Before deleting element at '%d' pos \n",index);
  display(head);
  printf("\n");

  struct node *temp1 = head;
  struct node *temp2 = head->next;

int i=0;
  while(i<index-1){
    temp1 = temp1->next;
    temp2 =  temp2->next;
    i++;
  }

  temp1->next = temp2->next;
  free(temp2);

  printf("After deletingg element at '%d' position \n",index);
  display(head);
  printf("\n");
  return head;

}


struct node * delend(struct node *head ){
  printf("Before d
  eleting last element\n");
  display(head);
  printf("\n");
  struct node *temp = head;


  while(temp->next->next!=NULL){
      temp = temp->next;
  }
  free(temp->next->next);
  temp->next = NULL;

  printf("After deletingg element at last position \n");
  display(head);
  printf("\n");
  return head;

}

void main(){

    struct node * head,*second,*third;

    head = (struct node *) malloc (sizeof(struct node));
    second = (struct node *) malloc (sizeof(struct node));
    third = (struct node *) malloc (sizeof(struct node));

    head -> data = 7;
    head -> next = second;
    head -> prev = NULL;

    second-> data = 18;
    second -> next = third;
    second -> prev = head;

    third -> data = 89;
    third -> next = NULL;
    third -> prev = second;
    printf("data elements in linklise\n");
    display(head);
    printf("\n");

    printf("data elements in linklise reverse\n");
    displayRev(head);
    printf("\n");


    head = add1(head,1);

    head = addMid(head,99,3);

    head = addend(head,100);

    printf("\n\nDELETION IN LINKLIST>>>>>\n\n");


    head = del1(head);

    head = delmid(head,3);

    head = delend(head);

}
