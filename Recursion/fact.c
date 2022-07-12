#include<stdio.h>

int fact(int n){

  if (n==1) return 1;
  else if (n==1) return 1;
  else return n*fact(n-1);
}


void main(){

  int n,ans;

  printf("Enter a number\n");
  scanf("%d",&n);

  ans = fact(n);

  printf("fact = %d\n",ans);
}
