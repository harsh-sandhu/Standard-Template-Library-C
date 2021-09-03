#include <stdio.h>
#include "binaryTreeLib.h"
int main(){
	int arr[7]={1,2,4,5,3,6,7};
	void* ptr[7];
	ptr[0]=(void*)&arr[0];	
	ptr[1]=(void*)&arr[1];
	ptr[2]=(void*)&arr[2];	
	ptr[3]=(void*)&arr[3];	
	ptr[4]=(void*)&arr[4];	
	ptr[5]=(void*)&arr[5];
	ptr[6]=(void*)&arr[6];
	btree* root;
	arrToBTree(root,ptr,5,1);
	inorderBtree(root);printf("\n");
	preorderBtree(root);printf("\n");
}
