#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *next;
};

/*
struct node * createStack(){
  return NULL;
}
*/

int isEmpty(struct node *s){

  if(s==NULL )return 1;
  return 0;
}
struct node * push(struct node*s,int data){

  struct node *temp = (struct node *)malloc (sizeof(struct node));
  if(!temp) printf("Memory error!\n");
  temp -> data =  data;
  temp -> next = s;
  s = temp;
  printf("Added Successfully\n");
  return s;
}

struct node * pop(struct node *s){
  int data;
  struct node *temp=s;

  if(isEmpty(s)){
    printf("Stack is empty\n");
    return 0;
  }else{
  s = s->next;
  data = temp->data;
  free(temp);
  printf("data pop = %d",data);
}  return s;

}


void printStack(struct node *s){
  struct node *t =s;
  while(t->next!=NULL) {
    printf("%d ->",t->data);
    t=t->next;
  }
  printf("NULL\n\n");
}


void isFull(struct node *s){

  printf("*   Stack using Linklist can never be get fulled   *\n\n");
}

void deleteStack(struct node *s){
  struct node *temp,*p=s;


  while(p->next ){
    temp = p;
    p = p->next;
    free(temp);
  }
    free(p);
}


  void main(){

    struct node *s;
    s = (struct node *)malloc (sizeof(struct node));

    int ch,y,val;
  //  s = createStack();
    do{

    printf("\n\nWhat you want to do\n");
    printf("1.push\n2.pop\n3.isEmpty\n4.isFull\n5.topOfStack\n6.Delete stack\n");
    scanf("%d",&ch);

      switch(ch){

        case 1 :
          printf("Enter value : ");
          scanf("%d",&val);
          s = push(s,val);
          printf("Stack elements are as\n");
          printStack(s);
          break;

        case 2 :
        s =  pop(s);
          break;

          case 3:
            if(isEmpty(s))
            printf("stack is empty\n");

            else{ printf("Stack is not Empty\n");}
            break;

        case 4:
            isFull(s);
            break;

        case 5:
            printf("Top = %d\n",s->data);
            break;

        case 6:
          deleteStack(s);
          break;

        default:
          printf("Wrong choice \n");

      }

    }while(1);


  }
