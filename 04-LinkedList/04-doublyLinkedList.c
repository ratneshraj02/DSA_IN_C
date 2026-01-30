/* Doubly Linked List */
/*
    A doubly linked list in C is a linear DS where each node content data & two pointer, one pointer the previous node & another pointing to next node is the sequence.

    This design enables traverse both forward & backward this is the difference between singly linked list and doubly linked list.
*/

/* Node Structure :-
    In C language a doubly linked list is typically implement using struct keyword the defines three member the data, a pointer to the next node, a pointer to the previous node.
    
    syntac :-

    struct Node {
        int data;
        struct Node * next;
        struct Node * prev;
    };
*/  
    
/* 
    Each node can be dynamically allocated using functions like malloc() and conneted using next & previous pointer.


    |data| pointer | <------- |data|pointer|
    |    |         | -------> |    |       |
*/

/*
    Core operation of doubly linked list :-
        Common operation decipher by doubly linked list includes
            -> Insertation (at the beginnning, end , middle)
            -> Deletion
            -> Traversal (forward, backward)

    e.g :- 
            Inserting at the front involves create a new node, updating next & previous pointer & modifing the head if needed.
 */

 /* Key features & usage of DLL
    1. Doubly linked list allow efficent inseration & delection from both the ends.
    2. They support bi-directional traversal which is usefull in application like memory management & navigation system.
*/

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

//function to create a new node
struct Node* createNode(int data){
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));

    newNode -> data = data;
    newNode -> prev = NULL;
    newNode -> next = NULL;

    return newNode;
}

//insert node at the beginning

void insertAtBeginning(struct  Node** head,int data){
    struct Node* newNode = createNode(data);

    if(*head == NULL){
        *head = newNode;
        return;
    }
    newNode -> next = *head;
    (*head) -> prev = newNode;
    *head = newNode;
}

