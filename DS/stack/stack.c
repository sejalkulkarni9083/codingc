#include "stack.h"
#include<stdio.h>
void push(struct Stack *ptrStack, int data){
   
    
    if(ptrStack->top==4){
        printf("Stack Overflow\n");
        return;
    }
    ptrStack->top=ptrStack->top+1;
    ptrStack->arr[ptrStack->top]=data;
}

int pop(struct Stack *ptrStack){

    //code implementation
    return 0;
}

void display(struct Stack *ptrStack){
    //code implementation

    for(int i=0; i<=ptrStack->top; i++){
        printf("%d\n", ptrStack->arr[i]);
    }
}
void queue(struct queue *ptrqueue,int data){

    
}