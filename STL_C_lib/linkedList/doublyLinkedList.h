#ifndef doublyLinkedList
#include <stdlib.h>
#include "../DataTypes.h"

// NODE FOR DOUBLY-LINKED-LIST

struct dlinkedlist{
    void* data;
    struct dlinkedlist* next;
    struct dlinkedlist* prev;
    struct dlinkedlist* end;
    int length;
    short datatype;
};
typedef struct dlinkedlist dlinkedlist;


// construct the Doubly-linked-list

dlinkedlist* constructDLL(int datatype){
    dlinkedlist* head=(dlinkedlist*)malloc(sizeof(dlinkedlist));
    head->length=-1;
    head->next=NULL;
    head->prev=NULL;
    head->end=NULL;
    if(datatype==1){
    	head->data=(void*)&dataInt;
    }else if(datatype==2){
	head->data=(void*)&dataChar;
    }else if(datatype==3){
	head->data=(void*)&dataFloat;
    }else if(datatype==4){
	head->data=(void*)&dataString;
    }
    head->datatype=(short)datatype;
}

//insert at the head of linked-list

void insertAtHeadDLL(dlinkedlist* head, void* val){
    //if element to be added is first element
    if(head->length==-1){
        head->data=val;
	head->length=1;
	head->end=head;
	return;
    }

    //Initializing memory for new node
    dlinkedlist* newNode=(dlinkedlist*)malloc(sizeof(dlinkedlist));

    //adding Node at start(without changing the head pointer)
    newNode->data=head->data;
    newNode->next=head->next;
    if(head->next!=NULL){
    	head->next->prev=newNode;
    }
    head->data=val;
    head->next=newNode;
    newNode->prev=head;

    if(head->length==1){
	    head->end=newNode;
    }

   //Increase length of linked-list
    head->length+=1;
}

//Function for inserting element at tail in linked-list
void insertAtTailDLL(dlinkedlist* head,void* val){

    //if element is to be added is first Element
    if(head->length==-1){
    	head->data=val;
	head->length=1;
	head->end=head;
	return;
    }

    //initializing memory for new node
    dlinkedlist* newNode=(dlinkedlist*)malloc(sizeof(dlinkedlist));
    newNode->data=val;
    newNode->next=NULL;


    //attaching last node at end
    head->end->next=newNode;
    newNode->prev=head->end;
    head->end=newNode;

    //increasing the length of list;
    head->length+=1;
}

//Function to delete Node at the end
void deleteAtTailDLL(dlinkedlist* head){

    //if linked-list is already empty
    if(head->length==-1){
    	printf("ERROR: Linked-list is empty\n");
	return;
    }

    //if linked-list has only one element
    if(head->next==NULL){
        
	head->length=-1;

	if(head->datatype==1){
    	    head->data=&dataInt;
	}else if(head->datatype==2){
	    head->data=&dataChar;
	}else if(head->datatype==3){
	    head->data=&dataFloat;
	}else if(head->datatype==4){
	    head->data=&dataString;
	}
	
	head->end=NULL;
	return;
    }

    dlinkedlist* todelete=head->end;
    head->end=head->end->prev;
    head->end->next=NULL;

    //free the garbage memory
    free(todelete);

    //reduce size of linked-list
    head->length-=1;
}

//Function to delete Node at the head, Character type
void deleteAtHeadDLL(dlinkedlist* head){

    //if linked-list is already empty
    if(head->length==-1){
    	printf("ERROR: Linked-list is empty\n");
	return;
    }

    //if linked-list had only one element
    if(head->next==NULL){
    	head->length=-1;

	if(head->datatype==1){
    	    head->data=&dataInt;
	}else if(head->datatype==2){
	    head->data=&dataChar;
	}else if(head->datatype==3){
	    head->data=&dataFloat;
	}else if(head->datatype==4){
	    head->data=&dataString;
	}

	head->end=NULL;
	return;
    }

    //removing the head without deleting head pointer
    head->data=head->next->data;
    dlinkedlist* todelete=head->next;
    head->next=head->next->next;
    if(head->next!=NULL){
    	head->next->prev=head;
    }
    if(head->length==2){
    	head->end=head;
    }

    //free the initialized memory
    free(todelete);

    //reduce size of list
    head->length-=1;
}

//Function to print Linked-list
void printDLL(dlinkedlist* head){

    dlinkedlist* temp=head;

    while(temp!=NULL){
	if(head->datatype==1){
    	    printf("%d ",*(int*)temp->data);
	}else if(head->datatype==2){
	    printf("%c ",*(char*)temp->data);
	}else if(head->datatype==3){
	    printf("%f ",*(float*)temp->data);
	}else if(head->datatype==4){
	    printf("%s ",(char*)temp->data);
	}
	temp=temp->next;
    }
    printf("\n");
}

// Function to return size of doubly linked list
int sizeDLL(dlinkedlist* head){
    return head->length;
}


//<----------FREE THE MEMORY-------------->

void freeMemoryDLL(dlinkedlist* head){

    //free the memery
    dlinkedlist* next;
    while(head!=NULL){
    	next=head->next;
	free(head);
	head=next;
    }
    free(next);

}

//<--------------------------------------->
#define doublyLinkedList
#endif
