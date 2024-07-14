#include <stdio.h>
#include "stdlib.h"

#ifndef STACK_STACK_H
#define STACK_STACK_H
#define MAX 100

typedef char Stack_Entry;
//structure
typedef struct StackNode{
    struct StackNode *Next;
    Stack_Entry Entry;
}StackNode;
typedef struct Stack{
      StackNode *Top;
      int size;
} Stack;

void CreateStack(Stack *ps);

int IsEmpty(Stack *ps);

int IsFull(Stack *ps);

void Push(Stack *ps, Stack_Entry item);

void Pop(Stack *ps, Stack_Entry *pe);

void StackTop(Stack *ps, Stack_Entry *pe);

void ClearStack(Stack *ps);

void Display(Stack_Entry element);

void TraverseStack(Stack *ps, void (*PointerToFunction)(Stack_Entry));

int StackSize(Stack *ps);

#endif //STACK_STACK_H
