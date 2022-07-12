#include<stdlib.h>

#include<stdio.h>

struct node{
  int data;
  struct node *next;
};


struct node* add_node(struct node *head,int data,int index){
  struct node *p ,*q;
  q = head;
  p = (struct node *)malloc (sizeof(struct node));
  p->data= data;
  p->next = NULL;

  if(index==1){
    p->next=head;
    head=p;

  }
  if (index>1 ){
    for(int i=0;i<index;i++){
      q=q->next;
      if(q==NULL){
        printf("Out of Scope\n" );
      return head;
    }
    }
    p->next=q->next;
    q->next=p;

  }
    return head;
}

void show_linklist(struct node *head){
  struct node *temp = head;
  while(temp!=NULL){
    printf("%d -> ",temp->data);
    temp=temp->next;
  }
  printf("NULL\n" );
}

struct node * deleteNode(struct node *head,int index){

  struct node *d=head;
  if(index==1){
    head=head->next;
    free(d);
  }else{
    for(int i=1;i<index-1;i++){
      d = d-> next;

    }
    struct node *del = d->next;
    d->next =del-> next ;
    free(del);
  }
  return head;
}

//finding nth node from end of show_linklist

void nthNode(struct node * head ,int index){
  struct node*ptr1,*tmp;
  ptr1=head;
  tmp=head;

  for(int i=0;i<index;i++){
    tmp = tmp->next;
  }

  while(tmp!=NULL){
    tmp=tmp->next;
    ptr1=ptr1->next;
  }

  printf("value at %d index from last is %d\n",index,ptr1->data);
}
void main(){

struct node*first,*second,*third,*head;

first = (struct node *)malloc(sizeof(struct node));
second = (struct node *)malloc(sizeof(struct node));
third = (struct node *)malloc(sizeof(struct node));

head = first;

first->data =10;
first->next = second;

second->data =20;
second->next = third;

third->data = 30;
third->next = NULL;

show_linklist(head);

head =add_node(head,5,1);

show_linklist(head);

head =add_node(head,40,3);

show_linklist(head);

head =add_node(head,70,7);

show_linklist(head);
/*
printf("deleinting first index\n");
head = deleteNode (head,1);
show_linklist(head);

printf("deleinting 3rd index\n");
head = deleteNode (head,3);
show_linklist(head);

printf("deleinting 3rd index\n");
head = deleteNode (head,3);
show_linklist(head);

*/

nthNode(head,3);
}
