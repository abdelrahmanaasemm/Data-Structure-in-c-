#include "Queue.h"
void CreateQueue(Queue *pq) {
    pq->size = 0;
    pq->front = 0;
    pq->rear = -1;
}

void Enqueue(Queue *pq, Queue_Entry element) {
    pq->rear = (pq->rear + 1) % MAX;
    pq->entry[pq->rear] = element;
    pq->size++;
}

void Dequeue(Queue *pq, Queue_Entry *pe) {
    *pe=pq->entry[pq->front];
    pq->front = (pq->front + 1) % MAX;
    pq->size--;
}
int QueueEmpty(Queue *pq){
    return !pq->size;
}
int QueueFull(Queue *pq){
    return pq->size==MAX;
}
int QueueSize(Queue *pq){
    return pq->size;
}
void ClearQueue(Queue *pq){
    pq->size=0;
    pq->front=0;
    pq->rear=-1;
}
void Queuefront(Queue *pq,Queue_Entry *pe){
    *pe=pq->entry[pq->front];
}
void DisplayQueue(Queue_Entry element) {
    printf("element = %d\n", element);
}
void TraverseQueue(Queue *pq,void(*pf)(Queue_Entry)){
    int pos,s;
    for ( s = 0,pos=pq->front; s <pq->size ; ++s) {
        (*pf)(pq->entry[pos]);
        pos=(pos+1)%MAX;

    }
}
