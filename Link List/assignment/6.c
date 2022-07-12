/*Reverse the linklist.
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

struct node * reverseLinklist(struct node *head){

  struct node * temp = NULL,*nextnode = NULL;

  while(head!=NULL){
  nextnode = head->next;
  head->next = temp;
  temp = head;
  head = nextnode;
  }
  return temp;
}
void main(){

    struct node * head,*second,*third,*four,*five,*six,*seven,*newNode;
    int isCyclic;
    head = (struct node *) malloc (sizeof(struct node));
    second = (struct node *) malloc (sizeof(struct node));
    third = (struct node *) malloc (sizeof(struct node));
    four = (struct node *) malloc (sizeof(struct node));
    five = (struct node *) malloc (sizeof(struct node));
    six = (struct node *) malloc (sizeof(struct node));
    seven = (struct node *)malloc (sizeof(struct node));
    newNode = (struct node *)malloc (sizeof(struct node));

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
    seven -> next = NULL;

    printf("data elements in linklise\n");
    display(head);
    printf("\n");


    head = reverseLinklist(head);

    printf("After reverse....\n");
    printf("data elements in linklise\n");
    display(head);
    printf("\n");

}
