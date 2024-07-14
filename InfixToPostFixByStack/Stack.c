#include "Stack.h"
//This Stack is a Helper stack us to access the minimum element in the stack with o(1)
Stack mini;
//this function initialize the top with 0
void CreateStack(Stack *ps) {
    ps->top = 0;

}

//this function check the stack empty or not
int IsEmpty(Stack *ps) {
    return !ps->top;
}
//This function check the stack full or not
int IsFull(Stack *ps) {
    return ps->top == MAX;
}
//This function add an element to the top of the stack
void Push(Stack *ps, Stack_Entry item) {
    if (ps->top == 0) {
        mini.top = 0;
    }
    ps->entry[ps->top++] = item;
    if (IsEmpty(&mini)) {
        mini.entry[mini.top++] = ps->entry[ps->top - 1];

    }
    if ((ps->entry[ps->top - 1] > mini.entry[mini.top - 1])) {
    } else {
        mini.entry[mini.top++] = ps->entry[ps->top - 1];
    }
}

//accessing mechanism
//This Function delate the top element from the stack
void Pop(Stack *ps, Stack_Entry *pe) {

    *pe = ps->entry[--ps->top];
    if (*pe > mini.entry[(mini.top) - 1]) {

    } else {
        mini.top--;
    }

}
//Function access the top element in the stack
void StackTop(Stack *ps, Stack_Entry *pe) {
    *pe = ps->entry[(ps->top) - 1];

}
//Thid Function make the stack empty
void ClearStack(Stack *ps) {
    ps->top = 0;
}
// Helper Function take an element and print it
void Display(Stack_Entry element) {
    printf("element = %d\n", element);
}
//This a function take two parameters pointer to function and pointer to stack and usually used to print the elements in the stack
void TraverseStack(Stack *ps, void (*PointerToFunction)(Stack_Entry)) {
    for (int i = ps->top; i > 0; --i) {
        (*PointerToFunction)(ps->entry[i - 1]);
    }
}
//We can access the top of the stack by This Function if there is no creation to the stack top function
// stack top use less memory than this function you should use the other function
void StackTopUserLevel(Stack *ps, Stack_Entry *pe) {
    Pop(ps, pe);
    Push(ps, *pe);
}
//Function return the minimum element in the stack
Stack_Entry FindMin() {
    return mini.entry[mini.top - 1];
}

//Function return the first element in the stack
Stack_Entry FirstElement(Stack *ps, Stack_Entry *PFirstElement) {
    *PFirstElement = ps->entry[0];
    return *PFirstElement;
}
//Function make a copy from a stack to another stack
void MakeCopy(Stack *ps, Stack *pcopy) {
    for (int i = 0; i < ps->top; ++i) {
        pcopy->entry[i] = ps->entry[i];
    }
    pcopy->top = ps->top;
}
//Function return the stack size
int StackSize(Stack *ps) {
    return ps->top;
}
