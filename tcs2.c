#include<stdio.h>
#include<string.h>
void main(){
  char s[100];

  scanf("%s",s);

  for(int i=0;i<strlen(s);i++){

    printf("%c",122-s[i]+97);
}
}
