//BST
#include<stdio.h>
#include<stdlib.h>

struct node {

  int data;
  struct node *right;
  struct node *left;

};

struct node* createNode(int data){
    struct node * p;
    p =(struct node *)malloc(sizeof(struct node));
    p->data=data;
    p->right =  NULL;
    p->left = NULL;
    return p;
}

void Inordertraversal(struct node *p){

  struct node * root = p;

  if(root!=NULL){
    Inordertraversal(root->left);
    printf("%d ",root->data);
    Inordertraversal(root->right);
  }
}

void PreorderTraversal(struct node *p){

  struct node * root = p;

  if(root!=NULL){
    printf("%d ",root->data);
    PreorderTraversal(root->left);
    PreorderTraversal(root->right);
  }
}

void PostorderTraversal(struct node *p){

  struct node * root = p;

  if(root!=NULL){
    PostorderTraversal(root->left);
    PostorderTraversal(root->right);
    printf("%d ",root->data);
  }
}

int isBst(struct node *root){
  struct node * prev = NULL;

  if(root!=NULL){

    if(!isBst(root->left))
      return 0;

    if(prev !=NULL && root->data < prev->data)
    prev = root;
      return isBst(root->right);
  }
  else{
    return 1;
  }
}
void main(){

  struct node *p,*q,*s,*t,*r;
  p = createNode(6);
  q = createNode(4);
  r = createNode(7);
  s = createNode(2);
  t = createNode(5);

  p->right = r;
  p->left = q;

  q->right = t;
  q->left = s;

  printf("Inorder Traversal is\n");
  Inordertraversal(p);

  printf("\nPreorderTraversal Traversal is\n");
  PreorderTraversal(p);

  printf("\nPostorderTraversal Traversal is\n");
  PostorderTraversal(p);
  printf("\n");
  
  int d = isBst(p);
  if(d)
  printf("it is Bst");
  else
  printf("it is not Bst");

}
