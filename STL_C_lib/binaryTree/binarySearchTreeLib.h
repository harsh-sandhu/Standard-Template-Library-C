#ifndef binarySearchTreeLib
#include <stdlib.h>
#include <string.h>

//Binary Search Tree Node
struct bst {
    void* data;
    struct bst *left;
    struct bst *right;
    short datatype;
};
typedef struct bst bst;


// Create a node
bst* createBSTNode(short datatype,void* item) {

    //Allocate memory for node
    bst* node = (struct bst*)malloc(sizeof(struct bst));
  
    node->data = item;
    node->left = NULL;
    node->right = NULL;

    node->datatype=datatype;

    return node;
}

short compareBSTNode(void* n1, void* n2, short datatype){
    if(datatype==1){
    	int temp1=*(int*)n1;
	int temp2=*(int*)n2;
	if(temp1<temp2){
	    return -1;
	}else if(temp2<temp1){
	    return 1;
	}else{
	    return 0;
	}
    }else if(datatype==2){
    	char temp1=*(char*)n1;
	char temp2=*(char*)n2;
	if(temp1<temp2){
	    return -1;
	}else if(temp2<temp1){
	    return 1;
	}else{
	    return 0;
	}
    }else if(datatype==3){
    	float temp1=*(float*)n1;
	float temp2=*(float*)n2;
	if(temp1<temp2){
	    return -1;
	}else if(temp2<temp1){
	    return 1;
	}else{
	    return 0;
	}
    }else if(datatype==4){
    	char* temp1=*(char**)n1;
	char* temp2=*(char**)n2;
	if(strcmp(temp1,temp2)<0){
	    return -1;
	}else if(strcmp(temp1,temp2)>0){
	    return 1;
	}else{
	    return 0;
	}
    }
}

// Insert a node
bst* insertInBST(bst* node, void* val , short datatype) {

    // Return a new node if the tree is empty
    if (node == NULL){
	return createBSTNode(datatype,val);
    }

    // Traverse to the right place and insert the node
    if (compareBSTNode(val,node->data,datatype)==-1){
    	node->left = insertInBST(node->left, val, node->datatype);
    }else{
    	node->right = insertInBST(node->right, val, node->datatype);
    }

    return node;
}

// Find the inorder successor
bst* minValueBST(bst* node) {

    bst* temp = node;

    // Find the leftmost leaf
    while (temp && temp->left != NULL){
    	temp = temp->left;
    }

    return temp;
}


// Deleting a node
bst* deleteFromBST(bst* root, void* val) {
  
    // Return if the tree is empty
    if (root == NULL){
	    return root;
    }

    // Find the node to be deleted
    
    if (compareBSTNode(val,root->data,root->datatype)==-1){
    	root->left = deleteFromBST(root->left, val);
    }else if (compareBSTNode(val,root->data,root->datatype)==1){
    	root->right = deleteFromBST(root->right, val);
    }else{

    	// If the node is with only one child or no child
    	if (root->left == NULL) {
      	    bst* temp = root->right;
      	    free(root);
      	    return temp;
    	} else if (root->right == NULL) {
      	    bst* temp = root->left;
      	    free(root);
      	    return temp;
    	}

    	// If the node has two children
    	bst* temp = minValueBST(root->right);

    	// Place the inorder successor in position of the node to be deleted
    	root->data = temp->data;

    	// Delete the inorder successor
    	root->right = deleteFromBST(root->right, temp->data);
    }
    return root;
}

// Postorder Traversal
void postorderBST(bst *root) {
  
    if (root != NULL) {

    	postorderBST(root->left);
	postorderBST(root->right);

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
}

// Inorder Traversal
void inorderBST(bst *root) {
  
    if (root != NULL) {

    	inorderBST(root->left);

    	if(root->datatype==1){
            printf("%d ",*(int*)root->data);
    	}else if(root->datatype==2){
            printf("%c ",*(char*)root->data);
    	}else if(root->datatype==3){
            printf("%f ",*(float*)root->data);
    	}else if(root->datatype==4){
            printf("%s ",*(char**)root->data);
    	}

    	inorderBST(root->right);
    }
}

// Preorder Traversal
void preorderBST(bst *root) {
  
    if (root != NULL) {

    	if(root->datatype==1){
            printf("%d ",*(int*)root->data);
    	}else if(root->datatype==2){
            printf("%c ",*(char*)root->data);
    	}else if(root->datatype==3){
            printf("%f ",*(float*)root->data);
    	}else if(root->datatype==4){
            printf("%s ",*(char**)root->data);
    	}
	
	preorderBST(root->left);
    	preorderBST(root->right);
    }
}
#define binarySearchTreeLib
#endif
