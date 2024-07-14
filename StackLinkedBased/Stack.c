#include "stack.h"

void CreateStack(Stack *ps) {
    ps->Top = NULL;
    ps->size=0;
}


int IsEmpty(Stack *ps) {
    return ps->Top == NULL;
}

int IsFull(Stack *ps) {
    return 0;
}

void Push(Stack *ps, Stack_Entry item) {
    StackNode *pn = (StackNode *) malloc(sizeof(StackNode));
    pn->Entry = item;
    pn->Next = ps->Top;
    ps->Top = pn;
    ps->size++;
}

void Pop(Stack *ps, Stack_Entry *pe) {
    StackNode *pn;
    *pe = ps->Top->Entry;
    pn = ps->Top;
    ps->Top = ps->Top->Next;
    free(pn);
    ps->size--;
}

void StackTop(Stack *ps, Stack_Entry *pe) {
    *pe = ps->Top->Entry;
}

void ClearStack(Stack *ps) {
    StackNode *pn = ps->Top;
    while (pn) {
        ps->Top = ps->Top->Next;
        free(pn);
        pn = ps->Top;
    }
    ps->size=0;
}

void Display(Stack_Entry element) {
    printf("element is %d\n", element);
}

void TraverseStack(Stack *ps, void (*PointerToFunction)(Stack_Entry)) {
    StackNode *pn = ps->Top;
    while (pn) {
        (*PointerToFunction)(pn->Entry);
        pn = pn->Next;
    }
}

int StackSize(Stack *ps) {
    return ps->size;
}