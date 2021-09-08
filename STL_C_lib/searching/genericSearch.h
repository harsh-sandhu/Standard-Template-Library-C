
#ifndef genericSearch
#include <string.h>
int searchArr(void* arr,int n, void* key, short datatype){

    int real_index=-1;	
    if(datatype==1){
	int* a=arr;
	int k=*(int*)key;
    	for(int i=0;i<n;i++){
    	    if(a[i]==k){
	    	real_index=i;
		break;	
	    }
    	}
    }else if(datatype==2){
	char* a=arr;
	char k=*(char*)key;
    	for(int i=0;i<n;i++){
    	    if(a[i]==k){
	    	real_index=i;
		break;	
	    }
    	}
    }else if(datatype==3){
	float* a=arr;
	float k=*(float*)key;
    	for(int i=0;i<n;i++){
    	    if(a[i]==k){
	    	real_index=i;
		break;	
	    }
    	}
    }else if(datatype==4){
	char** a=arr;
	char* k=*(char**)key;
    	for(int i=0;i<n;i++){
    	    if(strcmp(a[i],k)==0){
	    	real_index=i;
		break;	
	    }
    	}
    }
    return real_index;
}

#define genericSearch
#endif
