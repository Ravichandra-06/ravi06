#include<stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

void push(int v){
    if(top == MAX-1){
        printf("stack is full\n");
    }
    else{
        stack[++top] = v;
    }
}

void pop(){
    if(top == -1){
        printf("stack is empty\n");
    }
    else{
        printf("%d popped\n",stack[top--]);
    }
}
void display(){
    for(int i=top;i>=0;i--){
        printf("%d ",stack[i]);
    printf("\n"); 
    }
}
int main(){
    push(10);
    push(20);
    push(30);
    display();
    pop(10);
    display();
    return 0;
}
