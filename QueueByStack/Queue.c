#include "Queue.h"
#include "Stack.h"
Stack s1,s2;
void CreateQueue(Queue *pq){
    pq->size=0;
    pq->front=0;
    pq->rear=-1;
    CreateStack(&s1);
    CreateStack(&s2);
}
void Enqueue(Queue *pq,Queue_Entry element){
    Push(&s1,element);
}
void Dequeue(Queue *pq, Queue_Entry *pe) {
    while (StackSize(&s1)>1){
        Stack_Entry temp;
        Pop(&s1,&temp);
        Push(&s2,temp);
    }
    Pop(&s1,pe);
    while (StackSize(&s2)){
        Stack_Entry temp;
        Pop(&s2,&temp);
        Push(&s1,temp);
    }
}
int QueueEmpty(Queue *pq){
    return !StackSize(&s1);
}
int QueueFull(Queue *pq){
    return StackSize(&s1);
}
void ClearQueue(Queue *pq){
    ClearStack(&s1);
}
int QueueSize(Queue *pq) {
    StackSize(&s1);
}
void Queuefront(Queue *pq,Queue_Entry *pe){
    while (StackSize(&s1)>1){
        Stack_Entry temp;
        Pop(&s1,&temp);
        Push(&s2,temp);
    }
    Pop(&s1,pe);
    Push(&s1,*pe);
    while (StackSize(&s2)){
        Stack_Entry temp;
        Pop(&s2,&temp);
        Push(&s1,temp);
    }
}