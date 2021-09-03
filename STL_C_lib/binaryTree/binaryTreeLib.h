#ifndef binaryTreeLib
#include <stdlib.h>
#include "../DataTypes.h"

//<----------Node of Tree--------->

struct btree{
    void* data;
    struct btree* left;
    struct btree* right;
    short datatype;
};
typedef struct btree btree;

//<-------Construct the binary tree------>
//returns a pointer of type btree (btree*)

btree* constructBTree(short datatype){

    btree* root=(btree*)malloc(sizeof(btree));
	
    root->datatype=datatype;
    root->left=NULL;
    root->right=NULL;

    if(datatype==1){
    	root->data=(void*)&dataInt;
    }else if(datatype==2){
	root->data=(void*)&dataChar;
    }else if(datatype==3){
	root->data=(void*)&dataFloat;
    }else if(datatype==4){
	root->data=(void*)&dataString;
    }
    //root->data=NULL;
    return root;
}

btree* addNode(short datatype,void* val){
    
    btree* root=(btree*)malloc(sizeof(btree));
	
    root->datatype=datatype;
    root->left=NULL;
    root->right=NULL;

    root->data=val;
    
    return root;
}

//<--------MAKE TREE FROM ARRAY------>
void arrToBTree(btree* root, void* arr[], int n, short datatype){
     static int index=0;
     //root->data=arr[index++];
     if(index>n){
     	return;
     }
     root->data=arr[index++];
     if(index>n){
     	return;
     }
     root->left=addNode(datatype,arr[index++]);
     if(index>n){
     	return;
     }
     root->right=addNode(datatype,arr[index++]);

     arrToBTree(root->left,arr,n,datatype);
     arrToBTree(root->right,arr,n,datatype);
}


//<---------PREORDER TRAVERSAL---------->
void preorderBtree(btree* root){
    
    if(root==(void*)&dataInt){
	return;
    }

    if(root->datatype==1){
    	printf("%d ",*(int*)root->data);
    }else if(root->datatype==2){
        printf("%c ",*(char*)root->data);
    }else if(root->datatype==3){
        printf("%f ",*(float*)root->data);
    }else if(root->datatype==4){
        printf("%s ",(char*)root->data);
    }

    preorderBtree(root->left);
    
    preorderBtree(root->right);
  	
}

//<---------INORDER TRAVERSAL---------->
void inorderBtree(btree* root){
 	
    if(root==NULL){
    	return;
    }
    preorderBtree(root->left);

    if(root->datatype==1){
    	printf("%d ",*(int*)root->data);
    }else if(root->datatype==2){
        printf("%c ",*(char*)root->data);
    }else if(root->datatype==3){
        printf("%f ",*(float*)root->data);
    }else if(root->datatype==4){
        printf("%s ",(char*)root->data);
    }
    
    preorderBtree(root->right);
	
}
#define binaryTreeLib
#endif
