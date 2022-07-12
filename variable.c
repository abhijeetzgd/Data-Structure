#include<stdio.h>

void main(){
  char name[20];

  scanf("%s",name);

  if(isdigit(name[0])){
    printf("False");

  }else{
    printf("True");

  }


}
