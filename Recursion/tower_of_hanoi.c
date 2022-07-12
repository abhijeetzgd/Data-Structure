#include<stdio.h>

int towerOfHanoi(int n,char from,char to,char aux){

  if(n==1){
    printf("Move disc 1 from %c to %c\n",from,to);
    return 0;
  }

  towerOfHanoi(n-1,from,aux,to);

  printf("Move disk %d from %c to %c\n",n,from,to);

  towerOfHanoi(n-1,aux,to,from);
}
void main(){

  int n;
  char from = 'a';
  char aux = 'b';
  char to = 'c';

  printf("enter no.of disc\n");
  scanf("%d",&n);

  towerOfHanoi(n,from,to,aux);
}
