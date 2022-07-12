#include<stdio.h>

int partition(int arr[],int low,int high){

  int pivote = arr[low];
  int i=low;
  int j=high;

  do{

    while(arr[i]<=pivote)
    i++;

    while(arr[j]>=pivote)
    j--;

    if(i<j){
      int temp = arr[j];
      arr[j]=arr[i];
      arr[i]=temp;
    }
  }while(i<j);

  int temp = arr[low];
  arr[low]=arr[j];
  arr[j]=temp;
  return j;
}

void quick(int arr[],int low,int high){

  int index ;

  if(low<high){
    index=partition(arr,low,high);
    quick(arr,low,index-1);
    quick(arr,index+1,high);
}
}

void main(){
  int arr[]={12,34,67,21,78,2};
  int n=6;

  for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
  }

  quick(arr,0,5);

  for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
  }
  printf("\n");
}
