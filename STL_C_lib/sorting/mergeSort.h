#ifndef mergeSort
#include "comparator.h"

void merge(void* a[], int l, int mid, int r,void* b[],short(*cmp)(void*, void*)){
    int k=l;
    int i=l;
    int j=mid+1;
    while(k<=r){
    	if(i>mid){
	    b[k++]=a[j++];
	}else if(j>r){
	    b[k++]=a[i++];
	}else if((*cmp)(a[i],a[j])>0){
	    b[k++]=a[j++];
	}else{
	    b[k++]=a[i++];
	}
    }
    for(k=l;k<=r;k++){
	a[k]=b[k];
    }
}
void merge_sort(void **a,int l,int r, short(*cmp)(void* ,void*)){
    if(l==r){
    	return;
    }
    int mid=l+(r-l)/2;
    void** temp_arr=(void**)calloc(r+1,sizeof(void*));
    merge_sort(a,l,mid,cmp);
    merge_sort(a,mid+1,r,cmp);
    merge(a,l,mid,r,temp_arr,cmp);
    free(temp_arr);
}
#define mergeSort
#endif
