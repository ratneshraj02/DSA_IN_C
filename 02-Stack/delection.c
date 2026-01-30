#include <stdio.h>
int MAXSIZE = 8;
int stack[8];
int top = -1;

/* Check if the stack is empty */
int isEmpty(){
    if(top == -1){
        return 1;
    } else {
        return 0;
    }
}

/* Check if the stack is full */
int isFully(){
    if(top == MAXSIZE){
        return 1;
    } else {
        return 0;
    }
}

/* function to insert the stack */
int push(int data){
    if(!isEmpty()){
        top += 1;
        stack[top] = data;
    } else {
        printf("\n Could not insert data, Stack is fulll.");
    }
}

/* function to delete from the stack */
int pop(){
    int data;
    if(!isFully()){
        data = stack[top];
        top -= 1;
        return data;  
    } else {
        printf("\n Could not delete the data, Stack isEmpty");
    }
    return 0;
}

int main(){
    
    //insert the data into stack
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    push(7);
    push(8);

    printf("\n Stack Element \n");
    for(int i = 0; i < 8; i++){
        printf("%d\t",stack[i]);
    }

    printf("\n Element popped :\n");
    //print stack data;
    while(!isEmpty()){
        int data = pop();
        printf("%d", data);
    }

    return 0;
}