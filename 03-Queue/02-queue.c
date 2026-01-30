/* Program of demonstrate the function of queue */
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

int arr_queue[MAX_SIZE];
int rear = 0;
int front = 0;

/* function for the creat the queue or enqueue */
void enqueue(int item){

    if(rear == MAX_SIZE){
        printf("Queue is full\n");
    } else {
        arr_queue[rear++] = item;
        printf("%d is inserted \n",item);
    }  
}

/* function for the remove the item in queue or dequeue */
void dequeue(){
    if(front == rear){
        printf("Queue is empty");
    } else {
        printf("Removed %d",arr_queue[front]);
        front++;
    }
}
/* display function  */
void display(){
    if(front == rear){
        printf("Queue is empty");
    } else {
        printf("Queue:\t");
        for(int i = front; i < rear; i++){
            printf("%d",arr_queue[i]);
            printf("  ");
        }
        
    }
}

int main(){

    int choice, item;
    
    while(1){
        printf("\n1 - Insert; 2 - Remove; 3 - Display; 4 - Exit\n");

        printf("enter the choice : ");
        scanf("%d",&choice);

        switch(choice){
            case 1:
                printf("Enter value to insert : ");
                scanf("%d",&item);
                enqueue(item);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
        }
    }

    return 0;
}