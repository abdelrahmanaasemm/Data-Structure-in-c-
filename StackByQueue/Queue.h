#include <stdio.h>
#include "stdlib.h"
#define MAX 100
typedef int Queue_Entry;
typedef struct {
    int size;
    int rear;
    int front;
    Queue_Entry entry[MAX];

}Queue;
void CreateQueue(Queue *pq);
void Enqueue(Queue *pq,Queue_Entry element);
void Dequeue(Queue *pq, Queue_Entry *pe) ;
int QueueEmpty(Queue *pq);
int QueueFull(Queue *pq);
void ClearQueue(Queue *pq);
int QueueSize(Queue *pq);
void Queuefront(Queue *pq,Queue_Entry *pe);
void DisplayQueue(Queue_Entry element) ;
void TraverseQueue(Queue *pq,void(*pf)(Queue_Entry));