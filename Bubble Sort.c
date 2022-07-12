//Bubbled Sort
#include<stdio.h>

void Bubbled(int *arr,int n){
int flag;
  for(int i=0;i<n;i++){
    int flag =1;
    for(int j=0;j<n-1-i;j++){
      if(arr[j]>arr[j+1]){
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1]=temp;
        flag =0;
      }
    }
    if(flag)
    return;
  }
}

void main(){
  int arr[]={12,3,45,23,48,1};
  int n=6;

  for(int i=0;i<n;i++){

    printf("%d ",arr[i]);
  }

  Bubbled(arr,n);
printf("\n After sorting\n");
  for(int i=0;i<n;i++){

      printf("%d ",arr[i]);
  }

}
