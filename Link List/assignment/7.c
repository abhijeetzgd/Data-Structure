/*Find merging point of two linklist
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

struct node * meargingPoint(struct node *head,struct node *head1){

  struct node * l1 = head,*l2 = head1;
  int a=0,b=0;

  while(l1!=NULL){
    l1 = l1-> next;
    a++;
  }
  l1 = head;

  while(l2!=NULL){
    l2 = l2 -> next;
    b++;
  }
  l2 = head1;

  if(a>b){
    for(int i=0;i<(a-b);i++){
      l1 = l1 -> next;
    }
  }else{
    for(int i=0;i<(b-a);i++){
      l2 = l2 -> next;
    }
  }

  while(l1!=NULL && l2!=NULL){
    if(l1 == l2)
      return l1;
    l1 = l1-> next;
    l2 = l2 -> next;
  }
}
void main(){

    struct node *head,*second,*third,*four,*five,*six,*seven,*pt;

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
    seven -> next = NULL;

    struct node * head1,*second1,*third1,*four1,*five1,*six1,*seven1;

    head1 = (struct node *) malloc (sizeof(struct node));
    second1 = (struct node *) malloc (sizeof(struct node));
    third1 = (struct node *) malloc (sizeof(struct node));

    head1 -> data = 11;
    head1 -> next = second1;

    second1-> data = 22;
    second1 -> next = five;


    printf("data elements in first linklise\n");
    display(head);
    printf("\n");

    printf("data elements in second linklise\n");
    display(head1);
    printf("\n");

    pt = meargingPoint(head,head1);

    printf("merging point in linklise = %d\n",pt->data);

}
