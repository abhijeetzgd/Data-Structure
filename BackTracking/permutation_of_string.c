#include<stdio.h>
#include<string.h>
char* swap(char *name,int lb,int hb){
  char t;
  t = name[lb];
  name[lb] = name[hb];
  name[hb] = t;

  return name;
}

void permutation(char* name,int lb,int hb){

  if(lb==hb){
    printf("%s\n",name);
  }else{
  for(int i=lb;i<hb;i++){
    //do
    name = swap(name,lb,i);

    permutation(name,lb+1,hb);

    name = swap(name,lb,i);
  }
  }
}

void main(){
  char* name ;
  printf("Enter String");
  scanf("%s",name);

  permutation(name,0,strlen(name));
}
