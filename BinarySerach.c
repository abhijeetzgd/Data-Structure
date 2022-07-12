#include<stdio.h>

int BinarySearch(int *a ,int key,int n)
{

  int low =0;
  int high =n-1;

while(low<=high){
  int mid = ( low + high )/2;

  if(mid ==key)
      return mid;

  if(key > a[mid])
        low = mid+1;
  else
          high = mid-1;

}
}
void main(){

  int a[]={1,2,3,4,5,6};
  int n = 6;

  int key = 5;

int pos=  BinarySearch(a,key,n);

printf("%d is found at %d\n",key,pos);

}
