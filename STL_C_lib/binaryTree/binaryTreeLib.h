#ifndef binaryTreeLib
#include <stdio.h>
#include <stdlib.h>

//Binary tree Node
struct btree{
  void* data;
  struct btree* left;
  struct btree* right;
  short datatype;
};
typedef struct btree btree;


// Create a new Node
btree* createNode(short datatype,void* value) {

  //allocate memory for node of tree
  btree* newNode = malloc(sizeof(struct btree));

  //fill values
  newNode->data = value;
  newNode->left = NULL;
  newNode->right = NULL;

  //set datatype
  newNode->datatype=datatype;

  return newNode;
}


// Insert on the left of the node
btree* insertLeft(btree* root, void* value) {

  root->left = createNode(root->datatype,value);

  return root->left;
}

// Insert on the right of the node
btree* insertRight(btree* root, void* value) {

  root->right = createNode(root->datatype,value);

  return root->right;
}


// Inorder traversal
void inorderTraversal(btree* root) {
    
    if (root == NULL) return;

    inorderTraversal(root->left);
  
    if(root->datatype==1){
        printf("%d ",*(int*)root->data);
    }else if(root->datatype==2){
        printf("%c ",*(char*)root->data);
    }else if(root->datatype==3){
        printf("%f ",*(float*)root->data);
    }else if(root->datatype==4){
        printf("%s ",*(char**)root->data);
    }   
  
    inorderTraversal(root->right);
}

// Preorder traversal
void preorderTraversal(btree* root) {
    
    if (root == NULL) return;
  
    if(root->datatype==1){
        printf("%d ",*(int*)root->data);
    }else if(root->datatype==2){
        printf("%c ",*(char*)root->data);
    }else if(root->datatype==3){
        printf("%f ",*(float*)root->data);
    }else if(root->datatype==4){
        printf("%s ",*(char**)root->data);
    }   
    
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

// Postorder traversal
void postorderTraversal(btree* root) {
    
    if (root == NULL) return;
        
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    
    if(root->datatype==1){
        printf("%d ",*(int*)root->data);
    }else if(root->datatype==2){
        printf("%c ",*(char*)root->data);
    }else if(root->datatype==3){
        printf("%f ",*(float*)root->data);
    }else if(root->datatype==4){
        printf("%s ",*(char**)root->data);
    }   

}

#define binaryTreeLib
#endif
