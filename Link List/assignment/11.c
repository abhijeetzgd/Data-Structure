/*
merge two linklist in one resultant linklist in sorted order
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

struct node * mergeListSorted (struct node *head,struct node *head1){

  struct node*a = head;
  struct node*b = head1;
  struct node*result = NULL;
  if(b==NULL)
    return a;

  if(a==NULL)
    return b;

  if(a->data <= b->data){
    result = a;
    result -> next = mergeListSorted(a->next,b);
  }else{
    result = b;
    result -> next = mergeListSorted(b,a->next);
  }
  result->next =NULL;
  return result;
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

    head -> data = 21;
    head -> next = second;

    second-> data = 36;
    second -> next = third;

    third -> data = 47;
    third -> next = four;

    four -> data = 69;
    four -> next = NULL;

    five -> data = 12;
    five -> next = six;

    six -> data = 77;
    six -> next = seven;

    seven -> data = 90;
    seven -> next = eight;

    eight ->data = 1;
    eight -> next = NULL;

    nine ->data = 100;
    nine -> next = NULL;

    printf("data elements in linklise\n");
    display(head);
    printf("\n");


    struct node * head1,*second1,*third1,*four1,*five1,*six1,*seven1,*eight1,*nine1;

    head1 = (struct node *) malloc (sizeof(struct node));
    second1 = (struct node *) malloc (sizeof(struct node));
    third1 = (struct node *) malloc (sizeof(struct node));
    four1 = (struct node *) malloc (sizeof(struct node));
    five1 = (struct node *) malloc (sizeof(struct node));
    six1 = (struct node *) malloc (sizeof(struct node));
    seven1 = (struct node *)malloc (sizeof(struct node));
    eight1 = (struct node *)malloc (sizeof(struct node));
    nine1 = (struct node *)malloc (sizeof(struct node));

    head1 -> data = 15;
    head1 -> next = second1;

    second1-> data = 25;
    second1 -> next = third1;

    third1 -> data = 45;
    third1 -> next = four1;

    four1 -> data = 58;
    four1 -> next = five1;

    five1 -> data = 74;
    five1 -> next = NULL;

    six1 -> data = 29;
    six1 -> next = seven1;

    seven1 -> data = 94;
    seven1 -> next = eight1;

    eight1 ->data = 8;
    eight1 -> next = NULL;

    nine ->data = 19;
    nine -> next = NULL;

    printf("data elements in linklise\n");
    display(head1);
    printf("\n");

    struct node *result;

    result = mergeListSorted(head,head1);
    printf("After mearging ...\n");

    display(result);
    printf("\n");

    //printf("\n");

}
