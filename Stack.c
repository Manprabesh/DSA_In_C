#include<stdio.h>
#include<stdlib.h>


#define MAX 5 // Maximum size of the stack

int stack_arr[MAX];
int front = -1;

// Function to push an element onto the stack
void push(int data)
{
    // int i;
    if (front == MAX - 1)
    {
        printf("Stack overflow\n");
        return;
    }
    front += 1;
    stack_arr[front] = data;
}

void pop(){
    if(front==-1){
        printf("Stack Underflow");
    }
    front--;
}

// Function to print all elements of the stack
void print()
{
    int i;
    if (front == -1)
    {
        printf("Stack underflow\n");
        exit(1);
    }
    for (i = 0; i <= front; i++)
    {
        printf("%d ", stack_arr[i]);
    }
    printf("\n");
}

int main()
{
    // Push elements onto the stack
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    pop();

    // Print all elements of the stack
    print();
    push(50);
    print();

    return 0;
}
