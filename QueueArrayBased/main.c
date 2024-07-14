#include "Queue.h"

int main() {
    printf("Hello, World!\n");
    Queue q;
    CreateQueue(&q);
    Enqueue(&q, 11);
    Enqueue(&q, 23);
    Enqueue(&q, 111);
    Enqueue(&q, -1);
    Enqueue(&q, 1);
    if (!QueueEmpty(&q)) {
        Queue_Entry e;
        Queuefront(&q, &e);
        printf("Front is %d\n", e);
    }
    if (!QueueEmpty(&q)) {
        Queue_Entry e;
        Dequeue(&q, &e);
        printf("The Dequeued Element is %d\n", e);
    }
    if (!QueueFull(&q)) {
        Queue_Entry e=0;
        Enqueue(&q, e);
    }
    printf("The Queue size is %d\n", QueueSize(&q));
    TraverseQueue(&q,Display);
    ClearQueue(&q);
    printf("The Queue size is %d\n", QueueSize(&q));

    return 0;
}
