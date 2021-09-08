#ifndef bSearch
#include <stdlib.h>
#include "../sorting/comparator.h"
int binary_search(void* arr, short datatype, int l, int r, void* x)
{
    if (r >= l) {

        int mid = l + (r - l) / 2;

        // element is present at the middle
	if(datatype==1){
	    int* a=arr;
	    int* t=x;
            if (a[mid] == *t)
            	return mid;
	}else if(datatype==2){
	    char* c=arr;
	    char* t=x;
	   if(c[mid]==*t)
	        return mid; 
	}else if(datatype==3){
	    float* f=arr;
	    float* t=x;
	    if(f[mid]==*t)
		return mid; 
	}else{
	    exit(0);
	}

        // If element is smaller than mid
        if (datatype==1){
	    int* a=arr;
	    if(INTASC(x,(void*)&a[mid]))
            	return binary_search(arr, datatype, mid + 1, r, x);
	}else if (datatype==2){
	    char* a=arr;
	    if(CHARASC(x,(void*)&a[mid]))
            	return binary_search(arr, datatype, mid + 1, r, x);
	}else if (datatype=3){
	    float* a=arr;
	    if(FLOATASC(x,(void*)&a[mid]))
            	return binary_search(arr, datatype, mid + 1, r, x);
	}
        // Else
        return binary_search(arr, datatype, l, mid - 1, x);
    }

    return -1;
}

int binary_search_str(char** arr, int l, int r, char* x)
{
    if (r >= l) {

        int mid = l + (r - l) / 2;

	if(strcmp(arr[mid],x)==0)
	    return mid;

	if(strcmp(x,arr[mid])>0)
            return binary_search_str(arr, mid + 1, r, x);
        // Else
        return binary_search_str(arr, l, mid - 1, x);

    return -1;
    }
}
int binarySearch(void* arr, int n, void* ptrkey, short datatype){
    return binary_search(arr,datatype,0,n-1,ptrkey);
}
int binarySearchInt(void* arr, int n, int key){
    return binary_search(arr,1,0,n-1,&key);
}
int binarySearchChar(void* arr, int n, char key){
    return binary_search(arr,2,0,n-1,&key);
}
int binarySearchFloat(void* arr, int n, float key){
    return binary_search(arr,3,0,n-1,&key);
}
int binarySearchString(char** arr, int n, char* key){
    return binary_search_str(arr,0,n-1,key);
}

#define bSearch
#endif
