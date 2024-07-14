#include <stdio.h>
#include "stdlib.h"

typedef int Queue_Entry;
typedef struct QueueNode {
    struct QueueNode *next;
    Queue_Entry entry;

} QueueNode;
typedef struct Queue {
    QueueNode *front;
    QueueNode *rear;
    int size;

} Queue;

void CreateQueue(Queue *pq);

void Enqueue(Queue *pq, Queue_Entry element);

void Dequeue(Queue *pq, Queue_Entry *pe);

int QueueEmpty(Queue *pq);

int QueueFull(Queue *pq);

int QueueSize(Queue *pq);

void ClearQueue(Queue *pq);

void Display(Queue_Entry element);

void Queuefront(Queue *pq, Queue_Entry *pe);

void TraverseQueue(Queue *pq, void(*pf)(Queue_Entry));