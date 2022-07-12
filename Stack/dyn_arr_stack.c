#include<stdio.h>
#include<stdlib.h>

struct stack{
  int capacity;
  int top;
  int *arr;
};
//declaired Globaly for ease access
struct stack *s;

struct stack * createStack(){
  s = malloc (sizeof(struct stack));

  if(!s) return NULL;

  s-> capacity = 2;
  s-> top = -1;
  s->arr = malloc(s->capacity * sizeof(int));
  return s;
}

int isEmpty(struct stack *s){
  //return 1 if true else return 0
  return (s->top ==-1);
}

int isFull(struct stack *s){
  //condition true returns 1 else returns 0
  return(s->top == s->capacity-1);
}
void resize(struct stack *s){
  /*here we are doubling the capacuty of array*/
  s->capacity = s->capacity *2;
  s->arr = realloc(s->arr,s->capacity);
}
void push(struct stack *s,int data)  {

  if(isFull(s)) {
    resize(s);


    /* first increase top by 1 then push value top position */
    s->top = (s->top)+1;
    s->arr[(s->top)] = data;
  }
}

int pop(struct stack *s){

  if(isEmpty(s)){
    printf("Stack is Empty!\n");
    return 0;
  }else{
    /*removing element from top then decrese the top by 1*/
    return (s->arr[s->top--]);
  }
}

void deleteStack(struct stack *s){
  if(s){
    if(s->arr)
      free(s->arr);
    free(s);
  }
}
void main(){

  int ch,y,val;
  s = createStack();
  do{

  printf("\n\nWhat you want to do\n");
  printf("1.pop\n2.push\n3.isEmpty\n4.isFull\n5.topOfStack\n6.Delete stack\n");
  scanf("%d",&ch);

    switch(ch){

      case 1 :
        pop(s);
        break;


      case 2 :
        printf("Enter value : ");
        scanf("%d",&val);
        push(s,val);
        break;

      case 3:
          if(isEmpty(s)) printf("stack is empty\n");
          else printf("Stack is not Empty\n");
          break;

      case 4:
        if(isFull(s)) printf("stack is Full\n");
        else printf("Stack is not Full\n");
          break;

      case 5:
          printf("Top = %d\n",s->arr[s->top]);
          break;

      case 6:
        deleteStack(s);
        break;

      default:
        printf("Wrong choice ");

    }

  }while(1);


}
