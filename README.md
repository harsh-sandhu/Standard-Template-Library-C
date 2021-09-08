# Standard Template Library-C
### Why Standard Template Library for C language? 
Being a low-level language, not having object-oriented properties and not having a standard library providing any data-structure, C programming language makes it difficult to cope 
with today's programming problems and lack of time makes it even more difficult

To solve this problem, this is a ***Standard Template Library*** which provides different data structures to make problems easier to solve.

### What is a Standard Template Library?
Standard Template Library is a set of structures and fucntions which helps in different functionality. Languages, for example, C++ has Standard template Library and Java has Collection Interface which provides a big set of data structures and functions which can be used according to different problems to optimize both space and time, solving the problem more efficiently. It is basically set of some generic data structures which have extensive usage in real world problems.

### What is provided by Standard Template Library-C ?
This Standard Template Library designed for C provideds
* ***Linked-List*** (Functions like insertion, deletion, checkCycle, etc...) 
  * Singly-Linked-List
  * Doubly-Linked-List
* ***Stacks*** (Functions like push, pop, minimum element, maximum element, etc...)
  * Standard stack
  * Min-Stack
  * Max-Stack
* ***Queues*** (Function like enqueue, dequeue, peek, etc...) 
  * Standard Queue
  * Double-ended Queue ( Deque )
* ***Binary Tree and Binary Search Tree*** (Function like in-order,post-order and pre-order traversal, level-order traversal, etc...)
* ***Sorting Algorithms***
  * Quick Sort
  * Merge Sort
* ***Searching Algorithms***

### How to use this Standard Template Library in C?
To use this library, download the files in same folder where you have your file in which you want to use this library, then include this header libaray named CSTL.h
```C
 #include "CSTL.h"
```
User can also download files in any place and use the path in include statement of the program where you want to use the library.

## Linked List

### Singly-linked-list
Node: ***linkedlist***

Functions:

***constructLinkedList(datatype)*** : Construction of linked-list , returns head of newly constructed list.
```C
linkedlist* newList = constructLinkedList( _datatype_ );  //_datatype_ can be INTDATA,FLOATDATA,etc...
```

***insertAtHead(linkedlist * head,void * data)*** : Insert the data at the ***head*** of linkedlist.
head node of linkedlist in which you want to add the data is passed along with data(as a void pointer) in arguments.
```C
insertAtHead( myListHead, data);
```

***insertAtTail(linkedlist * head,void * data)*** : Insert the data at the ***tail*** of linkedlist.
head node of linkedlist in which you want to add the data is passed along with data(as a void pointer) in arguments.
```C
insertAtTail( myListHead, data);
```

***deleteAtHead(linkedlist * head)*** : delete the first node at the ***head*** of linkedlist.
head node of linkedlist from which you want to delete the data is passed in argument.
```C
deleteAtHead( myListHead );
```

***deleteAtTail(linkedlist * head)*** : delete the last node at the ***tail-end*** of linkedlist.
head node of linkedlist from which you want to delete the data is passed in argument.
```C
deleteAtTail( myListHead );
```

***printLinkedlist(linkedlist * head)*** : Print the listed-list, from head to tail.
head node of linkedlist which you want to print is passed in as an argument.
```C
printLinkedlist( myListHead );
```

***sizeLinkedlist(linkedlist * head)*** : return the size of listed-list.
head node of linkedlist whose size you want is passed in as an argument.
```C
int size = sizeLinkedlist( myListHead );
```

***freeMemoryLinkedList(linkedlist * head)*** : free's the whole memory occupied by linked-list.
head node of linkedlist whose memory is to be freed is passed in as an argument.
```C
freeMemoryLinkedList( myListHead );
```

### Time-Complexity and Space-complexity of Linked List functions
|                  Functions                 | Time Complexity | Space Complexity |
|--------------------------------------------|-----------------|------------------|
|constructLinkedList(datatype)               | O(1)            | O(1)             |
|insertAtHead(linkedlist * head,void * data) | O(1)            | O(1)             |
|insertAtTail(linkedlist * head,void * data) | O(1)            | O(1)             |
|deleteAtHead(linkedlist * head)             | O(n)            | O(1)             |
|deleteAtTail(linkedlist * head)             | O(1)            | O(1)             |
|printLinkedlist(linkedlist * head)          | O(n)            | O(1)             |
|sizeLinkedlist(linkedlist * head)           | O(1)            | O(1)             |
|freeMemoryLinkedList(linkedlist * head)     | O(n)            | O(1)             |

### Doubly-linked-list
Node: ***dlinkedlist***

Function:

***constructDLL(datatype)*** : Construction of doubly-linked-list , returns head of newly constructed list.
```C
dlinkedlist* newList = constructDLL( _datatype_ );  //_datatype_ can be INTDATA,FLOATDATA,etc...
```

***insertAtHeadDLL(dlinkedlist * head,void * data)*** : Insert the data at the ***head*** of linkedlist.
head node of dlinkedlist in which you want to add the data is passed along with data(as a void pointer) in arguments.
```C
insertAtHeadDLL( myListHead, data);
```

***insertAtTailDLL(dlinkedlist * head,void * data)*** : Insert the data at the ***tail*** of linkedlist.
head node of dlinkedlist in which you want to add the data is passed along with data(as a void pointer) in arguments.
```C
insertAtTailDLL( myListHead, data);
```

***deleteAtHeadDLL( dlinkedlist * head)*** : delete the first node at the ***head*** of linkedlist.
head node of dlinkedlist from which you want to delete the data is passed in argument.
```C
deleteAtHeadDLL( myListHead );
```

***deleteAtTailDLL( dlinkedlist * head)*** : delete the last node at the ***tail-end*** of linkedlist.
head node of dlinkedlist from which you want to delete the data is passed in argument.
```C
deleteAtTailDLL( myListHead );
```

***printDLL( dlinkedlist * head)*** : Print the doubly-listed-list, from head to tail.
head node of dlinkedlist which you want to print is passed in as an argument.
```C
printDLL( myListHead );
```

***sizeDLL( dlinkedlist * head)*** : return the size of doubly-listed-list.
head node of dlinkedlist whose size you want is passed in as an argument.
```C
int size = sizeDLL( myListHead );
```

***freeMemoryDLL( dlinkedlist * head)*** : free's the whole memory occupied by doubly-linked-list.
head node of dlinkedlist whose memory is to be freed is passed in as an argument.
```C
freeMemoryDLL( myListHead );
```

### Time-Complexity and Space-complexity of Doubly Linked List functions
|                  Functions                     | Time Complexity | Space Complexity |
|------------------------------------------------|-----------------|------------------|
|constructDLL(datatype)                          | O(1)            | O(1)             |
|insertAtHeadDLL(dlinkedlist * head,void * data) | O(1)            | O(1)             |
|insertAtTailDLL(dlinkedlist * head,void * data) | O(1)            | O(1)             |
|deleteAtHeadDLL(dlinkedlist * head)             | O(1)            | O(1)             |
|deleteAtTailDLL(dlinkedlist * head)             | O(1)            | O(1)             |
|printDLL(dlinkedlist * head)                    | O(n)            | O(1)             |
|sizeDLL(dlinkedlist * head)                     | O(1)            | O(1)             |
|freeMemoryDLL(dlinkedlist * head)               | O(n)            | O(1)             |

### Function for Cycle in Singly-linked-list

***makeCycle( linkedlist * head, int n)*** : attach the last node to the ***nth*** node of linkedlist, forming a cycle.
head node of linkedlist in which you want to make cycle along with node number ***n*** at which your cycle is to start are passed in argument.
```C
makeCycle( myListHead , 4);
```

***detectCycle(linkedlist * head)*** : checks if listed-list contains cycle at any node.
head node of linkedlist in which you want to detect the cycle is passed in as an argument.
***returns 1 if cycle is detected and 0 if linked-list has no cycle***.
```C
int has_cycle= detectCycle( myListHead );
```

***removeCycle(linkedlist* head)*** : removes the cycle in listed-list(if list has a cycle).
head node of linkedlist whose cycle is to be removed is passed in as an argument.
```C
removeCycle( myListHead );
```

### More Linked List Utility Functions

***insertArrAtTail(linkedlist * node,void * arr[], int arr_size)*** : insert a whole array of data (void pointer) at tail in linkedlist.
 Node pointer of linkedlist along with void pointer arr of data and size of array are passed as arguments.
```C
insertArrAtTail( MyListhead, ptr_arr, arr_size);
```

***insertArrAtHead(linkedlist * head,void * arr[], int arr_size)*** : insert a whole array of data (void pointer) at head ***(one by one)*** in linkedlist.
 ***head*** node pointer of linkedlist along with void pointer arr of data and size of array are passed as arguments.
```C
insertArrAtHead( MyListhead, ptr_arr, arr_size);
```

***insertArrAtTailDLL(dlinkedlist * node,void * arr[], int arr_size)*** : insert a whole array of data (void pointer) at tail in doubly-linkedlist.
 Node pointer of dlinkedlist along with void pointer arr of data and size of array are passed as arguments.
```C
insertArrAtTailDLL( MyListhead, ptr_arr, arr_size);
```

***insertArrAtHeadDLL(dlinkedlist * head,void * arr[], int arr_size)*** : insert a whole array of data (void pointer) at head ***(one by one)*** in doubly-linkedlist.
 ***head*** node pointer of dlinkedlist along with void pointer arr of data and size of array are passed as arguments.
```C
insertArrAtHeadDLL( MyListhead, ptr_arr, arr_size);
```

***Function to convert different data-type arrays to void pointer array are also given in this library***


## Stack
### Stack (Standard)
Node: ***stack***

Functions:

***constructStack(datatype)*** : Construction of stack , returns pointer to newly constructed stack.
```C
stack* newStack = constructStack( _datatype_ );  //_datatype_ can be INTDATA,FLOATDATA,etc...
```

***push(stack * s,void * val)*** : Push the data into the Stack.
 pointer to the stack in which you want to push the data is passed along with data(as a void pointer) in arguments.
```C
push( myStack , data);
```

***pop(stack * s)*** : Pop from the stack-top.
 pointer to stack from which you want to pop the data is passed as argument.
```C
pop( myStack );
```

***top(stack * s)*** : returns the data of ***top*** Node of the stack.
 pointer to stack from which you want to get the data of top is passed in argument.
```C
void* top_data = top( myStack );
```

***stackIsEmpty(stack * s)*** : check if the stack is empty or not.
 pointer to the stack which you want to check if its empty or not is passed in argument. 
 ***returns 1 if stack is empty else returns 0***
```C
int stack_empty = stackIsEmpty( myStack );
```

***sizeOfStack(stack * s)*** : return the size of stack.
 pointer to stack whose size you want is passed in as an argument.
```C
int size = sizeOfStack( myStack );
```

***freeMemoryStack(stack* s)*** : free's the whole memory occupied by stack.
 pointer to stack whose memory is to be freed is passed in as an argument.
```C
freeMemoryStack( myStack );
```

### Time-Complexity and Space-complexity of Stack functions
|                  Functions                 | Time Complexity | Space Complexity |
|--------------------------------------------|-----------------|------------------|
|constructStack(datatype)                    | O(1)            | O(1)             |
|push(stack * s,void * val)                  | O(1)            | O(1)             |
|pop(stack * s)                              | O(1)            | O(1)             |
|top(stack * s)                              | O(1)            | O(1)             |
|stackIsEmpty(stack * s)                     | O(1)            | O(1)             |
|sizeOfStack(stack * s)                      | O(1)            | O(1)             |
|freeMemoryStack(stack* s)                   | O(n)            | O(1)             |

### Min-Max Stack
Node: ***mstack***

Functions:

***constructMStack(datatype)*** : Construction of min-max stack , returns pointer to newly constructed mstack.
```C
mstack* newMStack = constructMStack( _datatype_ );  //_datatype_ can be INTDATA,FLOATDATA,etc...
```

***pushMStack( mstack * s,void * val)*** : Push the data into the Stack.
 pointer to the mstack in which you want to push the data is passed along with data(as a void pointer) in arguments.
```C
push( myMStack , data);
```

***popMStack( mstack * s)*** : Pop from the min-max stack-top.
 pointer to mstack from which you want to pop the data is passed as argument.
```C
popMStack( myMStack );
```

***topMStack(mstack * s)*** : returns the data of ***top*** Node of the min-max stack.
 pointer to mstack from which you want to get the data of top is passed in argument.
```C
void* top_data=topMStack( myMStack );
```

***minMStack(mstack * s)*** : returns the ***Min-Val data*** Node of the min-max stack.
 pointer to mstack from which you want to get the min-value-data  is passed in argument.
```C
minMStack( myMStack );
```

***maxMStack(mstack * s)*** : returns the ***Min-Val data*** Node of the min-max stack.
 pointer to mstack from which you want to get the max-value-data  is passed in argument.
```C
maxMStack( myMStack );
```

***MStackIsEmpty(mstack * s)*** : check if the min-max stack is empty or not.
 pointer to the mstack which you want to check if its empty or not is passed in argument. 
 ***returns 1 if stack is empty else returns 0***
```C
int stack_empty = MStackIsEmpty( myMStack );
```

***sizeMStack(mstack * s)*** : return the size of min-max stack.
 pointer to mstack whose size you want is passed in as an argument.
```C
int size = sizeOfMStack( myMStack );
```

***freeMemoryMStack(mstack* s)*** : free's the whole memory occupied by min-max stack.
 pointer to mstack whose memory is to be freed is passed in as an argument.
```C
freeMemoryMStack( myMStack );
```

### Time-Complexity and Space-complexity of Min-Max Stack functions
|                  Functions                 | Time Complexity | Space Complexity |
|--------------------------------------------|-----------------|------------------|
|constructMStack(datatype)                   | O(1)            | O(1)             |
|pushMStack(mstack * s,void * val)            | O(1)            | O(1)             |
|popMStack(mstack * s)                        | O(1)            | O(1)             |
|topMStack(mstack * s)                        | O(1)            | O(1)             |
|minMStack(mstack * s)                        | O(1)            | O(1)             |
|maxMStack(mstack * s)                        | O(1)            | O(1)             |
|MStackIsEmpty(mstack * s)                    | O(1)            | O(1)             |
|sizeMStack(mstack * s)                       | O(1)            | O(1)             |
|freeMemoryMStack(mstack* s)                  | O(n)            | O(1)             |

### More Stack Utility Functions

***pushArr(stack* s,void* arr[],int arr_size)*** : push a whole array of data (void pointer) ***(one by one)*** to the top of stack.
  pointer to stack along with void pointer arr of data and size of array are passed as arguments.
```C
pushArr( MyStack, ptr_arr, arr_size);
```

***pushArrInMStack(mstack* head, void* arr[], int arr_size)*** : push a whole array of data (void pointer) ***(one by one)*** to the top of min-max stack.
  pointer to mstack along with void pointer arr of data and size of array are passed as arguments.
```C
pushArrInMStack( MyStack, ptr_arr, arr_size);
```

***Function to convert different data-type arrays to void pointer array are also given in this library***

## Queue
### Queue (Standard)
Node: ***queue***

Functions:

***constructQueue(datatype)*** : Construction of queue , returns pointer to newly constructed queue.
```C
queue* newQueue = constructQueue( _datatype_ );  //_datatype_ can be INTDATA,FLOATDATA,etc...
```

***enqueue(queue * q,void * val)*** : Insert the data into the Queue.
 pointer to the queue in which you want to insert the data is passed along with data(as a void pointer) in arguments.
```C
enqueue( myQueue , data);
```

***dequeue(queue * q)*** : delete from the queue.
 pointer to queue from which you want to delete the data is passed as argument.
```C
dequeue( myQueue );
```

***peek(queue * q)*** : returns the data at ***front*** of the Queue.
 pointer to queue from which you want to get the data at front is passed in argument.
```C
void front_data = peek( myQueue );
```

***is_emptyQueue(queue * q)*** : check if the queue is empty or not.
 pointer to the queue which you want to check if its empty or not is passed in argument. 
 ***returns 1 if queue is empty else returns 0***
```C
int queue_empty = is_emptyQueue( myQueue );
```

***sizeOfQueue(queue * q)*** : return the size of queue.
 pointer to queue whose size you want is passed in as an argument.
```C
int size = sizeOfQueue( myQueue );
```

***freeMemoryQueue(queue* q)*** : free's the whole memory occupied by queue.
 pointer to queue whose memory is to be freed is passed in as an argument.
```C
freeMemoryQueue( myQueue );
```

### Time-Complexity and Space-complexity of Queue functions
|                  Functions                 | Time Complexity | Space Complexity |
|--------------------------------------------|-----------------|------------------|
|constructQueue(datatype)                    | O(1)            | O(1)             |
|enqueue(queue * q,void * val)               | O(1)            | O(1)             |
|dequeue(queue * q)                          | O(1)            | O(1)             |
|peek(queue * q)                             | O(1)            | O(1)             |
|is_emptyQueue(queue * q)                    | O(1)            | O(1)             |
|sizeOfQueue(queue * q)                      | O(1)            | O(1)             |
|freeMemoryQueue(queue* q)                   | O(n)            | O(1)             |

### Double-Ended-Queue (Deque)
Node: ***deque***

Functions:

***constructDeque(datatype)*** : Construction of deque , returns pointer to newly constructed deque.
```C
deque* newDeque = constructDeque( _datatype_ );  //_datatype_ can be INTDATA,FLOATDATA,etc...
```

***enqueueFront(deque * q,void * val)*** : Insert the data at front into the Deque.
 pointer to the deque in which you want to insert the data is passed along with data(as a void pointer) in arguments.
```C
enqueueFront( myDeque , data);
```

***dequeueFront(deque * q)*** : delete from the front of deque.
 pointer to deque from which you want to delete the data is passed as argument.
```C
dequeueFront( myDeque );
```

***enqueueBack(deque * q,void * val)*** : Insert the data at back into the Deque.
 pointer to the deque in which you want to insert the data is passed along with data(as a void pointer) in arguments.
```C
enqueueBack( myDeque , data);
```

***dequeueBack(deque * q)*** : delete from the back of deque.
 pointer to deque from which you want to delete the data is passed as argument.
```C
dequeueBack( myDeque );
```

***peekFront(deque * q)*** : returns the data at ***front*** of the Deque.
 pointer to deque from which you want to get the data at front is passed in argument.
```C
void front_data = peekFront( myDeque );
```

***peekBack(deque * q)*** : returns the data at ***back*** of the Deque.
 pointer to deque from which you want to get the data at back is passed in argument.
```C
void back_data = peekBack( myDeque );
```

***is_emptyDeque(deque* q)*** : check if the deque is empty or not.
 pointer to the deque which you want to check if its empty or not is passed in argument. 
 ***returns 1 if deque is empty else returns 0***
```C
int deque_empty = is_emptyDeque( myDeque );
```

***sizeOfDeque(deque * q)*** : return the size of deque.
 pointer to deque whose size you want is passed in as an argument.
```C
int size = sizeOfDeque( myDeque );
```

***freeMemoryDeque(deque* q)*** : free's the whole memory occupied by deque.
 pointer to deque whose memory is to be freed is passed in as an argument.
```C
freeMemoryDeque( myDeque );
```

### Time-Complexity and Space-complexity of Deque functions
|                  Functions                 | Time Complexity | Space Complexity |
|--------------------------------------------|-----------------|------------------|
|constructDeque(datatype)                    | O(1)            | O(1)             |
|enqueueFront(deque * q,void * val)          | O(1)            | O(1)             |
|dequeueFront(deque * q)                     | O(1)            | O(1)             |
|enqueueBack(deque * q,void * val)           | O(1)            | O(1)             |
|dequeueBack(deque * q)                      | O(1)            | O(1)             |
|peekFront(deque * q)                        | O(1)            | O(1)             |
|peekBack(deque * q)                         | O(1)            | O(1)             |
|is_emptyDeque(deque * q)                    | O(1)            | O(1)             |
|sizeOfDeque(deque * q)                      | O(1)            | O(1)             |
|freeMemoryDeque(deque* q)                   | O(n)            | O(1)             |

### More Deque Utility Functions

***enqueueArr(queue* q,void* arr[],int arr_size)*** : insert a whole array of data (void pointer) ***(one by one)*** to the queue.
  pointer to queue along with void pointer arr of data and size of array are passed as arguments.
```C
enqueueArr( MyQueue, ptr_arr, arr_size);
```

***enqueueFrontArr(deque* q, void* arr[], int arr_size)*** : insert a whole array of data (void pointer) to the front ***(one by one)*** of deque.
  pointer to deque along with void pointer arr of data and size of array are passed as arguments.
```C
enqueueFrontArr( MyDeque, ptr_arr, arr_size);
```

***enqueueBackArr(deque* q, void* arr[], int arr_size)*** : insert a whole array of data (void pointer) to the back ***(one by one)*** of deque.
  pointer to deque along with void pointer arr of data and size of array are passed as arguments.
```C
enqueueBackArr( MyDeque, ptr_arr, arr_size);
```

***Function to convert different data-type arrays to void pointer array are also given in this library***

## Binary Tree

### Binary Tree (Standard)
Node: ***btree***

Functions:

***createNode(_datatype_,void * value)*** : Create a Node for binary tree , with the value passed
```C
btree* btreeNode = createNode( _datatype_ , value);  //_datatype_ can be INTDATA,FLOATDATA,etc...
```

***insertLeft(btree * root, void * value)*** : Inserts the given value (void pointer) to left child of root. 
pointer to node along with data is passed as argument
```C
btree* btreeNode = insertLeft( node , value);  
```

***insertRight(btree * root, void * value)*** : Inserts the given value (void pointer) to right child of root. 
pointer to node along with data is passed as argument
```C
btree* btreeNode = insertRight( node , value);  
```

***inorderTraversal(btree* root)*** : prints Inorder traversal of given binary tree. 
pointer to the root node is passed as argument
```C
inorderTraversal( root );  
```

***preorderTraversal(btree* root)*** : prints Pre-order traversal of given binary tree. 
pointer to the root node is passed as argument
```C
preorderTraversal( root );  
```

***postorderTraversal(btree* root)*** : prints Post-order traversal of given binary tree. 
pointer to the root node is passed as argument
```C
postorderTraversal( root );  
```

### Time-Complexity and Space-complexity of Binary Tree functions
|                  Functions                 | Time Complexity | Space Complexity |
|--------------------------------------------|-----------------|------------------|
|createNode(datatype, void * value)          | O(1)            | O(1)             |
|insertLeft(btree * root, void * value)      | O(1)            | O(1)             |
|insertRight(btree * root, void * value)     | O(1)            | O(1)             |
|inorderTraversal(btree* root)               | O(n)            | O(1)             |
|preorderTraversal(btree* root)              | O(n)            | O(1)             |
|postorderTraversal(btree* root)             | O(n)            | O(1)             |

### Binary Search Tree
Node: ***bst***

Functions:

***createBSTNode(_datatype_,void * value)*** : Create a Node for binary search tree , with the value passed
```C
bst* bstNode = createBSTNode( _datatype_ , value);  //_datatype_ can be INTDATA,FLOATDATA,etc...
```

***insertInBST(bst * root, void * value)*** : Inserts the given value (void pointer) to right place in tree. 
pointer to root along with data is passed as argument.
 ***returns the new created left node***
```C
bst* bstNode = insertInBST( root , value);  
```

***deleteFromBST(bst * root, void * val)*** :  Delete the given value (void pointer) from the tree. 
pointer to root along with value is passed as argument.
 ***returns the deleted node***
```C
bst* bstNode = deleteFromBST( node , value);  
```

***inorderBST(bst* root)*** : prints Inorder traversal of given binary search tree. 
pointer to the root node is passed as argument
```C
inorderBST( root );  
```

***preorderBST(bst* root)*** : prints Pre-order traversal of given binary search tree. 
pointer to the root node is passed as argument
```C
preorderBST( root );  
```

***postorderBST(bst* root)*** : prints Post-order traversal of given binary search tree. 
pointer to the root node is passed as argument
```C
postorderBST( root );  
```

### Time-Complexity and Space-complexity of Binary Tree functions
|                  Functions                 | Time Complexity | Space Complexity |
|--------------------------------------------|-----------------|------------------|
|createBSTNode(datatype, void * value)       | O(1)            | O(1)             |
|insertInBST(bst * root, void * value)       | O(1)            | O(1)             |
|deleteFromBST(bst * root, void * val)       | O(1)            | O(1)             |
|inorderBST(bst* root)                       | O(n)            | O(1)             |
|preorderBST(bst* root)                      | O(n)            | O(1)             |
|postorderBST(bst* root)                     | O(n)            | O(1)             |


## Sorting

### Merge Sort
***merge_sort(void ** a,int l,int r, short( * cmp)(void * ,void * ))*** : void pointer array is passed with start and end along with comparator 

Time Complexity : O(nLogn)

Space Complexity: O(n)

```C
merge_sort(void **arr ,0,5, INTASC) // INTASC is a comparator
```
### Quick Sort
***quick_sort(void ** a,int l,int r, short( * cmp)(void * ,void * ))*** : void pointer array is passed with start and end along with comparator 

Time Complexity : O(nLogn)   worst-case: 0(n * n);

Space Complexity: O(1)

```C
quick_sort(void **arr ,0,5, INTASC) // INTASC is a comparator
```

### Comparator
***INTASC***- Integer in Ascending Order

***INTDESC***- Integer in Decending Order

***CHARASC***- Character in Ascending Order

***CHARDESC***- Character in Decending Order

***FLOATASC***- Float in Ascending Order

***FLOATDESC***- Float in Decending Order

***STRASC***- String in Ascending Order

***STRDESC***- String in Decending Order


## Generic Sorting
***sort(void * arr, int n , short( * cmp)(void * , void * ))*** : array (of int, float, char or string type) is passed along with the size of array and Sorting comparator
```C
sort(arr, 10 , INTASC);
```
***This function checks the pattern of data in array and size, and accordingly uses merge sort or quick sort, to reduce the time to sort as soon as possible***

## Utility functions
***itovp(int * arr,void * ptr[],int arr_size)*** : Converts integer array to void pointer array.
 interger array along with empty void pointer array and size of array are passed as arguement
 ```C
 itovp(arr,ptr[],size);
 ```
 
 ***ctovp(int * arr,void * ptr[],int arr_size)*** : Converts Character array to void pointer array.
 Character array along with empty void pointer array and size of array are passed as arguement
 ```C
 ctovp(arr,ptr[],size);
 ```
 
 ***ftovp(int * arr,void * ptr[],int arr_size)*** : Converts Float numbers array to void pointer array.
 Float numbers array along with empty void pointer array and size of array are passed as arguement
 ```C
 ftovp(arr,ptr[],size);
 ```
