#ifndef SortGeneric
#include <stdlib.h>
#include "mergeSort.h"
#include "quickSort.h"
#include <time.h>

void sort(void* arr, int n , short(*cmp)(void*, void*));

//Sorting algorithm deciding function
void sorting_algo(void** ptr,int n, short(*cmp)(void*, void*)){
    
    //if the value of size of array is greater than 1000
    if(n>1000){
	
	// makeing two sample arrays of size 250
	void** temp1=(void**)calloc(250,sizeof(void*));
	void** temp2=(void**)calloc(250,sizeof(void*));

	//calculating the factor
	int factor=n/250;

	//declaring a array for random indices
	int randomIndex[250];

	//getting the random indices
    	for(int i=0;i<250;i++){
	    randomIndex[i]=i*(rand()%factor);
	    
	}

	//sorting indices in ascending order
	sort(randomIndex,250,INTASC);

	//adding values at random indices into sample arrays
	for(int i=0;i<250;i++){
	    
	    temp1[i]=ptr[randomIndex[i]];
	    temp2[i]=ptr[randomIndex[i]];

	}
	//declaring variables for calculating time	
	clock_t mst;
	clock_t qst;

	//time calculation for merge sort
	mst=clock();
	merge_sort(temp1,0,249,cmp);
	mst=clock()-mst;
	free(temp1);

	//time calculation for quick sort
	qst=clock();
	quick_sort(temp2,0,249,cmp);
	qst=clock()-qst;
	free(temp2);

	double time_merge_sort=((double)mst)/CLOCKS_PER_SEC;
	double time_quick_sort=((double)qst)/CLOCKS_PER_SEC;
	
	//using algo which consumed less time in sample arrays
	if(time_merge_sort>time_quick_sort){
	    
	    quick_sort(ptr,0,n-1,cmp);

	}else{
	    
	    merge_sort(ptr,0,n-1,cmp);

	}
    }else{
	//if value is less than 1000, simple sort by quick sort 
    	quick_sort(ptr,0,n-1,cmp);
    }
}

//Function to sort arrays of various datatypes
void sort(void* arr, int n , short(*cmp)(void*, void*)){

    //if arr is integer-type	
    if(*cmp==*INTASC||*cmp==*INTDESC){
	
	int* a=arr;

	//memory for void pointer array
	void** ptr=(void**)calloc(n,sizeof(void*));
	if(ptr==NULL){
	    printf("ERROR: Memory allocation error");
	}

	//adding addresses of given array in pointer array
	for(int i=0;i<n;i++){
            ptr[i]=(void*)&a[i];
	}

	//SORTING
	sorting_algo(ptr,n,cmp);

	//putting back values in given array acording to sort	
	int* temp=(int*)calloc(n,sizeof(int));	
	if(temp==NULL){
	    printf("ERROR: Memory allocation error");
	}
	for(int i=0;i<n;i++){
	    temp[i]=*(int*)ptr[i];
	}

	//free-ing the unused memory
	free(ptr);

	for(int i=0;i<n;i++){
	    a[i]=temp[i];
	}

	free(temp);


    }else if(*cmp==*CHARASC||*cmp==*CHARDESC){
	char* a=arr;
	void** ptr=(void**)calloc(n,sizeof(void*));
	if(ptr==NULL){
	    printf("ERROR: Memory allocation error");
	}
	for(int i=0;i<n;i++){
	    ptr[i]=(void*)&a[i];
	}	
	sorting_algo(ptr,n,cmp);	
	char* temp=(char*)calloc(n,sizeof(char));
	if(temp==NULL){
	    printf("ERROR: Memory allocation error");
	}
	for(int i=0;i<n;i++){
	    temp[i]=*(char*)ptr[i];
	}
	free(ptr);
	for(int i=0;i<n;i++){
	    a[i]=temp[i];
	}
	free(temp);
    }else if(*cmp==*FLOATASC||*cmp==*FLOATDESC){
	float* a=arr;
	void** ptr=(void**)calloc(n,sizeof(void*));
	if(ptr==NULL){
	    printf("ERROR: Memory allocation error");
	}
	for(int i=0;i<n;i++){
	    ptr[i]=(void*)&a[i];
	}
	sorting_algo(ptr,n,cmp);	
	float* temp=(float*)calloc(n,sizeof(float));
	if(temp==NULL){
	    printf("ERROR: Memory allocation error");
	}
	for(int i=0;i<n;i++){
	    temp[i]=*(float*)ptr[i];
	}
	free(ptr);
	for(int i=0;i<n;i++){
	    a[i]=temp[i];
	}
	free(temp);
    
    }else if(*cmp==*STRASC||*cmp==*STRDESC){
	char** a=arr;
	void** ptr=(void**)calloc(n,sizeof(void*));
	if(ptr==NULL){
	    printf("ERROR: Memory allocation error");
	}
	for(int i=0;i<n;i++){
	    ptr[i]=(void*)&a[i];
	}	
	sorting_algo(ptr,n,cmp);	
	char** temp=(char**)calloc(n,sizeof(char*));
	if(temp==NULL){
	    printf("ERROR: Memory allocation error");
	}
	for(int i=0;i<n;i++){
	    temp[i]=*(char**)ptr[i];
	}
	free(ptr);
	for(int i=0;i<n;i++){
	    a[i]=temp[i];
	}
	free(temp);
    }
}
#define SortGeneric
#endif
