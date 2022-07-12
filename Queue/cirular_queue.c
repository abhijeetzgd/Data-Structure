#include<stdio.h>
#include<stdlib.h>

struct queue {
  int front,rear;
  int capacity;
  int *arr;
};

struct queue *createQue(){
  struct queue *q = malloc (sizeof (struct queue));

  if(!q) printf("Memeory error!!\n" );

  q->capacity = 5;
  q->front = q->rear = -1;
  q->arr = malloc(q->capacity*sizeof(int));
  if(q->arr) printf("Memeory error!!\n");
  return q;
}

int isEmpty(struct queue *q){
  /* if the condition is true then it return 1 else 0*/
  return (q->front ==-1);
}

int isFull(struct queue *q){

  return ((q->rear+1)%q->capacity == q->front);
}

int queueSize(struct queue *q){
  return ((q->capacity -q->front +q->rear+1)%q->capacity);
}

void enqueue(struct queue *q,int data){
  if(isFull(q)){
    printf("Queue is full\n");

  }else{
    q->rear = (q->rear +1)%q->capacity;
    q->arr[q->rear] = data;

    /* missing Condition */
    if(q->front ==-1)
    q->front = q->rear;
  }
}

int dequeue(struct queue *q){
  int data = 0;

  if(isEmpty(q)){
    printf("queue is empty\n");
  }else{
    data = q->arr[q->front];

    if(q->front == q->rear)
        q->front = q-> rear = -1;

    else
      q -> front = (q->front+1)%q->capacity;
  }
  return data;
}


void main(){
  struct queue *q;
  int ch,y,val,size;
  q = createQue();
  do{

  printf("\n\nWhat you want to do\n");
  printf("1.enqueue\n2.dequeue\n3.isEmpty\n4.isFull\n5.queuesize\n");
  scanf("%d",&ch);

    switch(ch){

      case 1 :
        printf("Enter value : ");
        scanf("%d",&val);
        enqueue(q,val);
        break;

      case 2 :
        dequeue(q);
        break;

      case 3:
          if(isEmpty(q)) printf("queue is empty\n");
          else printf("queue is not Empty\n");
          break;

      case 4:
        if(isFull(q)) printf("queue is Full\n");
        else printf("queue is not Full\n");
          break;

      case 5:
          size =queueSize(q);
          printf("Size of que = %d\n",size);
          break;


      default:
        printf("Wrong choice ");

    }

  }while(1);

}
