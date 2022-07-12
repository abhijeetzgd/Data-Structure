#include<stdio.h>
#include<stdlib.h>

struct MyArray {

  int size;
  int *ptr;
}arr;

void create (struct MyArray *a,int size){
  a->size = size;
  a->ptr = (int *)malloc (size*(sizeof(int)));
}
void display(struct MyArray *a,int size){
  printf("Entered elements are : ");
  for(int i=0;i<size;i++){
    printf("%d ",a->ptr[i]);
  }
}
void setval(struct MyArray *a,int size){
  printf("Enter elements of array : ");
  for(int i=0;i<size;i++){
    scanf("%d",a->ptr+i);
  }
}
void main(){

  int size;
  printf("Enter size of array : ");
  scanf("%d",&size);

  create(&arr,size);
  setval(&arr,size);
  display(&arr,size);
}
