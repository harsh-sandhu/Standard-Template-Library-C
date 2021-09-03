#ifndef quickSort
void swap(void** arr,int i,int j){
    void* t=arr[i];
    arr[i]=arr[j];
    arr[j]=t;
}
int partition(void** arr,int l,int r,short(*cmp)(void*, void*)){
    void* pivot=arr[r];
    int i=(l-1);
    for(int j=l;j<r;j++){
    	if(cmp(pivot,arr[j])>0){
	    i++;
	    swap(arr,i,j);
	}
    }
    swap(arr,i+1,r);
    return i+1;
}
void quick_sort(void** arr,int l,int r,short(*cmp)(void*, void*)){
    if(l<r){
    	int pi=partition(arr,l,r,cmp);
	quick_sort(arr,l,pi-1,cmp);
	quick_sort(arr,pi+1,r,cmp);
    }
}
#define quickSort
#endif
