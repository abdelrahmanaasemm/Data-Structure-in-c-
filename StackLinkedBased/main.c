#include "Stack.h"
int main() {
    Stack s;
    CreateStack(&s);
    Push(&s, 100);
    Push(&s, 1);
    Push(&s, 22);
    Push(&s, -1);
    Push(&s, 1);

    if (!IsEmpty(&s)) {
        Stack_Entry element;
        Pop(&s, &element);
        printf("The Poped Element from the stack is %d\n", element);
    }
    if (!IsEmpty(&s)) {
        Stack_Entry element;
        StackTop(&s, &element);
        printf("The Top Element in the stack is %d\n", element);
    }
    TraverseStack(&s,Display);
    printf("The Size of The Stack is %d\n", StackSize(&s));
    ClearStack(&s);
    printf("The Size of The Stack is %d\n", StackSize(&s));    return 0;
}
