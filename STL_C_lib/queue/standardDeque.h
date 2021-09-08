#ifndef standardDeque
#include <stdlib.h>
#include "../DataTypes.h"

//<------NODE OF DEQUE------->
//Doubly linked list implementation
struct deque{
    void* data;
    struct deque* next;
    struct deque* prev;
    struct deque* end;
    int length;
    int datatype;
};
typedef struct deque deque;


//<----------CONSTRUCTION OF DEQUE------------->

deque* constructDeque(int datatype){
    
    //allocate memory for head of deque	
    deque* head=(deque*)malloc(sizeof(deque));
    
    //initializing data in the deque node structure 
    head->length=-1;
    head->next=NULL;
    head->prev=NULL;
    head->end=NULL;
    head->datatype=datatype;

    //initializing according to dataTypes
    if(datatype==1){
    	head->data=(void*)&dataInt;
    }else if(datatype==2){
    	head->data=(void*)&dataChar;
    }else if(datatype==3){
    	head->data=(void*)&dataFloat;
    }else if(datatype==4){
    	head->data=(void*)&dataString;
    }
}

//<------------------------------------------->


//<------------INSERT IN THE DEQUE------------>

//Insert from the back
void enqueueBack(deque* head,void* val){

    //if deque is empty
    if(head->length==-1){
    	head->data=val;
	head->length=1;
	head->end=head;
	return;
    }

    //allocate memory for new node of deque
    deque* newNode=(deque*)malloc(sizeof(deque));

    //fill values in deque new node
    newNode->data=val;
    newNode->next=NULL;
    newNode->prev=head->end;

    //place value at end
    head->end->next=newNode;
    head->end=newNode;

    //increase the length of deque
    head->length+=1;
}


//Insert at the front
void enqueueFront(deque* head,void* val){

    //if deque is empty
    if(head->length==-1){
    	head->data=val;
	head->length=1;
	head->end=head;
	return;
    }

    //allocate memory for deque new node
    deque* newNode=(deque*)malloc(sizeof(deque));

    //add the new node to the front
    newNode->data=head->data;
    newNode->next=head->next;
    if(head->next!=NULL){
    	head->next->prev=newNode;
    }
    newNode->prev=head;
    head->next=newNode;
    head->data=val;
    if(head->end==head){
    	head->end=newNode;
    }

    //increase the length of deque
    head->length+=1;
}

//<------------------------------------------>

//<----------DELETE FROM THE DEQUE-------------->

//delete from the front of deque
void dequeueFront(deque* head){

    //if deque is empty
    if(head->length==-1){
    	printf("ERROR: Deque is Empty\n");
	return;
    }

    //if deque has only one element
    if(head->next==NULL){
    	head->length=-1;
	head->end=head;
	if(head->datatype==1){
	    head->data=(void*)&dataInt;
	}else if(head->datatype==2){
	    head->data=(void*)&dataChar;
	}else if(head->datatype==3){
	    head->data=(void*)&dataFloat;
	}else if(head->datatype==4){
	    head->data=(void*)&dataString;
	}
	return;
    }

    //deletion from front of deque
    head->data=head->next->data;
    deque* todelete=head->next;
    head->next=head->next->next;
    if(head->next!=NULL){
    	head->next->prev=head;
    }

    //free the unused memory
    free(todelete);

    //decrease the size of deque
    head->length-=1;
}

//deletion from the back of deque
void dequeueBack(deque* head){

    //if deque is empty
    if(head->length==-1){
    	printf("ERROR: Deque is Empty\n");
	return;
    }
    
    //if deque has only one element
    if(head->next==NULL){
    	head->length=-1;
	head->end=head;
	if(head->datatype==1){
	    head->data=(void*)&dataInt;
	}else if(head->datatype==2){
	    head->data=(void*)&dataChar;
	}else if(head->datatype==3){
	    head->data=(void*)&dataFloat;
	}else if(head->datatype==4){
	    head->data=(void*)&dataString;
	}
	return;
    }

    //delete from the back of queue
    deque* todelete=head->end;
    head->end=head->end->prev;
    head->end->next=NULL;

    //free the unused memory
    free(todelete);
    
    //decrease the length of deque
    head->length-=1;

}

//<-------------------------------------------->


//<-----------PEEK FROM THE DEQUE------------->

//peek from the front
void* peekFront(deque* head){

    //if deque is empty	
    if(head->length==-1){
    	printf("ERROR: Deque is Empty\n");
	exit(0);
    }

    //return the front of queue
    return head->data;
}

//peek from the back
void* peekBack(deque* head){

    //if deque is empty
    if(head->length==-1){
    	printf("ERROR: Deque is Empty\n");
	exit(0);
    }

    //if deque has only one element
    if(head->length==1){
    	return head->data;
    }

    //return the value at end of deque
    return head->end->data;
}

//<--------------------------------------------->


//<---------CHECK IF DEQUE IS EMPTY---------->

int is_emptyDeque(deque* head){
    return head->length>0?0:1;
}

//<------------------------------------------->

//<------------SIZE OF DEQUE------------->

int sizeOfDeque(deque* head){
    return head->length;
}

//<-------------------------------------->


void freeMemoryDeque(deque* head){

    //free the memery
    deque* next;
    while(head!=NULL){
    	next=head->next;
	free(head);
	head=next;
    }
    free(next);

}
#define standardDeque
#endif
