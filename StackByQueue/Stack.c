#include "Stack.h"
#include "Queue.h"
Queue q1,q2;
void CreateStack(Stack *ps) {
    ps->top = 0;
    CreateQueue(&q1);
    CreateQueue(&q2);
}
void Push(Stack *ps, Stack_Entry item){
    Enqueue(&q1,item);
}
int StackEmpty(Stack *ps){
    return QueueEmpty(&q1);
}

int StackFull(Stack *ps) {
    return QueueFull(&q1);
}
void Pop(Stack *ps, Stack_Entry *pe){
    while(StackSize(&q1)>1){
        Stack_Entry temp;
        Dequeue(&q1,&temp);
        Enqueue(&q2,temp);
    }
    Dequeue(&q1,pe);
    CreateQueue(&q1);
    while(QueueSize(&q2)>=1){
        Stack_Entry temp;
        Dequeue(&q2,&temp);
        Enqueue(&q1,temp);
    }
    CreateQueue(&q2);
}
void StackTop(Stack *ps, Stack_Entry *pe){
    while(QueueSize(&q1)>1){
        Stack_Entry temp;
        Dequeue(&q1,&temp);
        Enqueue(&q2,temp);
    }
    Dequeue(&q1,pe);
    while(QueueSize(&q2)>=1){
        Stack_Entry temp;
        Dequeue(&q2,&temp);
        Enqueue(&q1,temp);
    }
    Enqueue(&q1,*pe);
    CreateQueue(&q2);
}

void ClearStack(Stack *ps) {
    CreateQueue(&q1);
}



int StackSize(Stack *ps){
    return QueueSize(&q1);
}