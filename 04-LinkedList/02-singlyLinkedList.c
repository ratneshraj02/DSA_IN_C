/* Singly Linked List */
/*
    Singly linked list use for storing data in an easy and efficent way it comparises of two parts.
    
        1. node -> For storing data
        2. pointer -> for stroing the address of next node
         
    /* 
    How is singly linked list construct.
    For constuctring singly linked list "sturct" keyword use.
    
    syntex :-

    struct Node {
        int data;
        struct Node* next; 
   };
    */

/*
    & -> refersing operation - tells us the address of the variable.
    * -> derefersing operation - to know the memory address of the variable.

    Key Operation :-
    Common operations that can be perform on singly linked list includes.

    -> Inserting a new node at the Head, at the End or at a specific position.
    -> Delecting a node from the head, at the end or at a specific position.
    -> Traversing the list to display all data.
*/
/*
   Simple C program that demonstrate the basic operations of singly linked list.
*/
#include <stdio.h>
#include <stdlib.h>

    struct Node {
        int data;
        struct Node *next;
    };
    
    //To create a new node
    struct Node* CreateNode(int data) {
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode -> data = data;
        newNode -> next = NULL;
    };

    //Insert at the begnninng
    void insertAtFirst(struct Node ** head, int data) {
        struct Node * newNode = CreateNode(data);

        newNode -> next = *head;
        *head = newNode;
    }

    //print the linked list
    void print(struct Node* head){
        struct Node* temp = head;
        while(temp != NULL){
            printf("%d \t", temp -> data);
            temp = temp -> next;
        }
        printf("NULL");
    }

    //main function
    int main(){

        struct Node* head = NULL;

        insertAtFirst(&head,10);
        insertAtFirst(&head,20);
        insertAtFirst(&head,30);
        insertAtFirst(&head,40);

        print(head);
        return 0;
    }

    /*
        Benifit & usage of Singly linked list

        -> They provide dynamic memory allocation, allowing memory efficent addition & delection.

        -> In like array there size is not fixed elements can add or remove without shifting memory locations.
    */

    

