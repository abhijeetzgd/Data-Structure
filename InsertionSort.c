 //Insertion Sort
#include<stdio.h>

void insertion(int *a,int n){
  for(int i=1;i<n-1;i++){

    int key = a[i];
    int j=i-1;

    while(a[j]>key && j>=0){
      a[j+1]=a[j];
      j--;
    }
    a[j+1]=key;
  }
}

void main(){

  int a[]={1,4,7,2,5,8};
  int size = 6;

  for(int i=0;i<size;i++){
    printf("%d ",a[i]);
  }

  insertion(a,size);

printf("\n");
  for(int i=0;i<size;i++){
    printf("%d ",a[i]);
  }
}
