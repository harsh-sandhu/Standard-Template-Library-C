#ifndef comparator

#include <string.h>

short INTASC(void* a, void* b){
    int x=*(int*)a;
    int y=*(int*)b;
    if(x>y){
    	return 1;
    }else{
    	return 0;
    }
}

short INTDESC(void* a, void* b){
    int x=*(int*)a;
    int y=*(int*)b;
    if(x<y){
        return 1;
    }else{
        return 0;
    }
}

short CHARASC(void* a, void* b) {
    char x=*(char*)a;
    char y=*(char*)b;
    if(x>y){
    	return 1;
    }else{
    	return 0;
    }
}


short CHARDESC(void* a, void* b) {
    char x=*(char*)a;
    char y=*(char*)b;
    if(x<y){
    	return 1;
    }else{
    	return 0;
    }
}

short FLOATASC(void* a, void* b){
    float x=*(float*)a;
    float y=*(float*)b;
    if(x>y){
    	return 1;
    }else{
    	return 0;
    }
}

short FLOATDESC(void* a, void* b){
    float x=*(float*)a;
    float y=*(float*)b;
    if(x<y){
        return 1;
    }else{
        return 0;
    }
}


short STRASC(void* a, void* b){
    char* x=*(char**)a;
    char* y=*(char**)b;
    if(strcmp(x,y)>0){
    	return 1;
    }else{
    	return 0;
    }
}

short STRDESC(void* a, void* b){
    char* x=*(char**)a;
    char* y=*(char**)b;
    if(strcmp(x,y)<0){
        return 1;
    }else{
        return 0;
    }
}
#define comparator
#endif
