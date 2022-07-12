#include<stdio.h>
#include<stdlib.h>
struct node{

  int data;
  struct node* prev;
  struct node* next;
};

struct node * deleteNode(struct node *head,int pos){

    int k=1;
    struct node* temp2;
    struct node* temp = head;

    if(pos == 1){

      head = head->next;
      head->prev =NULL;
      free(temp);
      return head;
    }

      while(temp->next !=NULL && pos-1>k){
      //  temp2 = temp;
        temp = temp-> next;
        k++;
      }
      if(k!=pos){
        printf("Enterd position does not exist\n");
        return head;
      }
      temp2 = temp->prev;
      temp2->next = temp->next;
      if(temp->next)
      temp->next->prev = temp2;
      free(temp);
    return head;
}

struct node * insertNewNode(struct node *head,int data,int pos){

  int k=1;
  struct node* newNode;
  struct node* temp = head;
  newNode = (struct node * ) malloc (sizeof(struct node));
  newNode -> data = data;

  if(pos == 1){
    newNode -> next = head;
    head = newNode;
    head -> prev = NULL;
  }

    while(temp !=NULL && pos>k){
      temp = temp-> next;
      k++;
    }
    if(k!=pos){
      printf("Enterd position does not exist\n");
      return head;
    }
    newNode -> next = temp->next;
    newNode ->prev = temp;
    if(temp->next)
    temp->next->prev = newNode;
    temp->next = newNode;

  return head;
}

int printLinklist(struct node *head){
  int n;
  struct node *temp = head;

  while(temp!=NULL){
    printf("%d -> ",temp->data);
    n++;
    temp=temp->next;
  }
 printf("NULL\n");
  return n;
}
void main(){
    struct node *head,*second,*third;
    int n;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head -> data = 12;
    head -> prev = NULL;
    head -> next = second;

    second -> data = 21;
    second -> prev = head;
    second -> next = third;

    third -> data = 32;
    third -> prev = second;
    third -> next = NULL;

    n=printLinklist(head);   //n will take no.of node in DLL

    //inserting new node in DLL
    head = insertNewNode(head,5,1);
    n=printLinklist(head);

    head = insertNewNode(head,25,3-1);
    n=printLinklist(head);

    head = insertNewNode(head,50,4);
    n=printLinklist(head);

    printf("Deleteing 4st pos");
    head = deleteNode(head,4);
    n=printLinklist(head);


}
