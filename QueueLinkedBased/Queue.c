#include "Queue.h"

void CreateQueue(Queue *pq) {
    pq->front = NULL;
    pq->rear = NULL;
    pq->size = 0;
}

void Enqueue(Queue *pq, Queue_Entry element) {
    QueueNode *pn = (QueueNode *) (malloc(sizeof(QueueNode)));
    pn->entry = element;
    pn->next = NULL;

    if (!pq->rear) {
        pq->front = pn;
    } else {
        pq->rear->next = pn;
    }
    pq->rear = pn;
    pq->size++;
}

void Dequeue(Queue *pq, Queue_Entry *pe) {
    QueueNode *pf=pq->front;
    *pe=pf->entry;
    pq->front=pf->next;
    free(pf);
    if(!pq->front){
        pq->rear=NULL;
    }
    pq->size--;
}

int QueueEmpty(Queue *pq) {
    return !pq->size;
}

int QueueFull(Queue *pq){
    return 0;
}

int QueueSize(Queue *pq){
    return pq->size;
}
void ClearQueue(Queue *pq){
    while (pq->front){
        pq->rear=pq->front->next;
        free(pq->front);
        pq->front=pq->rear;
    }
    pq->size=0;
}
void Queuefront(Queue *pq,Queue_Entry *pe){
    *pe=pq->front->entry;
}
void Display(Queue_Entry element) {
    printf("element = %d\n", element);

}
void TraverseQueue(Queue *pq, void(*pf)(Queue_Entry)){
   QueueNode *pn=pq->front;
    for (; pn;) {
        (*pf)(pn->entry);
        pn=pn->next;
    }
}