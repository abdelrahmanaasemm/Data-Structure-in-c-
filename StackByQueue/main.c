#include "Queue.h"
#include "Stack.h"
int main() {
    printf("Hello, World!\n");
    Stack s;
    CreateStack(&s);
    Push(&s, 100);
    Push(&s, 1);
    Push(&s, 22);
    Push(&s, -1);
    Push(&s, 22);

        Stack_Entry element;
        Pop(&s, &element);
        printf("The Poped Element from the stack is %d\n", element);
    Pop(&s, &element);
    printf("The Poped Element from the stack is %d\n", element);

    Push(&s, 1110);
    Push(&s, 122);
    Push(&s, 54);
    Push(&s, 635);
    Push(&s,34);
    Pop(&s, &element);
    printf("The Poped Element from the stack is %d\n", element);

    Stack_Entry top;
    StackTop(&s,&top);
    printf("The Top Element in the stack is %d\n", top);


    Pop(&s, &element);
    printf("The Poped Element from the stack is %d\n", element);



    return 0;
}
