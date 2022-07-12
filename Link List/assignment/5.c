/*insert new node in sorted linklist.
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

struct node * insertSorted(struct node *head,struct node *newNode){
struct node *current ,*temp;
current = head;
if(!current) return newNode;

while(current!=NULL && current->data <= newNode->data){
  temp = current;
  current = current->next;
}
temp->next = newNode;
newNode -> next = current;
return head;
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

    printf("enter value for newNode");
    scanf("%d",&newNode->data);
    newNode -> next = NULL;

    head = insertSorted(head,newNode);

    printf("After insertion....\n");
    printf("data elements in linklise\n");
    display(head);
    printf("\n");

}
