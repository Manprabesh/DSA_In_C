#include <stdio.h>

#define MAX 10

struct Queue
{
    int array[MAX];
    int front;
    int rear;
};

void initialized(struct Queue *queue)
{
    queue->front = -1;
    queue->rear = -1;
}

void enqueue(struct Queue *queue, int data)
{
    if (queue->front == -1)
    {
        queue->array[++queue->front] = data;
    }

    if(queue->rear==MAX-1){
        printf("Queue Overflow\n");
    }
    // queue->rear++;
    queue->array[++queue->rear] = data;
}

void dequeue(struct Queue *queue){

    if(queue->front==-1){
        printf("Queue is empty");
    }

    int data = queue->array[queue->front];



    if (queue->front == queue->rear) {
        // If there was only one element in the queue, reset front and rear
        queue->front = -1;
        queue->rear = -1;
    }
    queue->front++;
    printf("The dequeue element is %d \n",data);
}

void display(struct Queue *queue)
{
    int i = queue->front;

    for (i; i <= queue->rear; i++)
    {
        printf("The element are %d, ", queue->array[i]);
    }
}

int main()
{
    struct Queue queue;
    initialized(&queue);
    enqueue(&queue, 10);
    enqueue(&queue, 20);
    dequeue(&queue);

    display(&queue);
}