#ifndef standardQueue
#include <stdlib.h>
#include "../DataTypes.h"

//<-----STRUCTURE OF QUEUE NODE------>

struct queue{
    void* data;
    struct queue* next;
    struct queue* end;
    int length;
    int datatype;
};
typedef struct queue queue;

//<---------------------------------->


//<------------CONSTRUCT THE QUEUE------------>

queue* constructQueue(int datatype){
    
    //allocate memory for queue
    queue* head=(queue*)malloc(sizeof(queue));
    
    //intialization of data in structure
    head->length=-1;
    head->next=NULL;
    head->end=NULL;

    //intialization according to datatypes
    if(datatype==1){
    	head->data=(void*)&dataInt;
	head->datatype=datatype;
    }else if(datatype==2){
	head->data=(void*)&dataChar;
	head->datatype=datatype; 
    }else if(datatype==3){
	head->data=(void*)&dataFloat;
	head->datatype=datatype;
    }else if(datatype==4){
	head->data=(void*)&dataString;
	head->datatype=datatype;
    }

    //return pointer for front of queue
    return head;
}

//<--------------------------------------->


//<--------INSERT IN QUEUE------------>


void enqueue(queue* head,void* val){
    
    //if queue is empty
    if(head->length==-1){
    	head->length=1;
	head->data=val;
	head->end=head;
	return;
    }

    //allocate memory for new queue node
    queue* newNode=(queue*)malloc(sizeof(queue));

    //put values in the queue node
    newNode->data=val;
    newNode->next=NULL;
    head->end->next=newNode;
    head->end=newNode;

    //increase the length of queue
    head->length+=1;
}

//<------------------------------------>


//<--------------DELETE FROM QUEUE------------->

void dequeue(queue* head){
    
    //if queue is empty	
    if(head->length==-1){
    	printf("ERROR: Queue is Empty\n");
	return;
    }

    //if queue has only one element
    if(head->next==NULL){
	if(head->datatype==1){
    	    head->data=&dataInt;
	}else if(head->datatype==2){
	    head->data=&dataChar;
	}else if(head->datatype==3){
	    head->data=&dataFloat;
	}else if(head->datatype==4){
	    head->data=&dataString;
	}
	head->length=-1;
	head->end=NULL;
	return;
    }

    //remove element from front
    head->data=head->next->data;
    queue* todelete=head->next;
    head->next=head->next->next;

    //free unused memory
    free(todelete);

    //decrease length of queue
    head->length-=1;
}

//<------------------------------------------>


//<--------PEEK THE FRONT OF QUEUE----------->

void* peek(queue* head){
    
    //if Queue is empty
    if(head->length==-1){
    	printf("ERROR: Queue is Empty\n");
	exit(0);
    }

    //return front of queue
    return head->data;
}

//<------------------------------------------>


//<------CHECK IF QUEUE IS EMPTY--------->

//return 1 if empty, else 0
int is_emptyQueue(queue* head){
    return head->length>0?0:1;
}

//<--------------------------------------->


//<------------SIZE OF QUEUE------------->

int sizeOfQueue(queue* head){
    return head->length;
}

//<-------------------------------------->

//<----------FREE THE MEMORY-------------->

void freeMemoryQueue(queue* head){

    //free the memery
    queue* next;
    while(head!=NULL){
    	next=head->next;
	free(head);
	head=next;
    }
    free(next);

}

//<--------------------------------------->


#define standardQueue
#endif
