#include <stdio.h>
int MAXSIZE = 8;

int stack[8];
int top = -1;

/* Check if the stack if full */
int isFull(){
    if(top == MAXSIZE){
        return 1;
    } else {
        return 0;
    }
}

/* Function to insert into the stack  */
int push(int data){
    if(!isFull()){
        top = top + 1;
        stack[top] = data;
    } else {
        printf("Could not insert data, Stack is full.\n");
    }
}

int main(){
    //insert the data into stack

    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    push(71);
    push(18);


    printf("\n Stack Element \n");
    for(int i = 0; i < 8; i++){
        printf("%d\t",stack[i]);
    }

    return 0;
}