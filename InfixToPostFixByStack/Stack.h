//
// Created by user1 on 6/29/2024.
//
#include <stdio.h>
#include "stdlib.h"

#ifndef STACK_STACK_H
#define STACK_STACK_H
#define MAX 100

typedef char Stack_Entry;
//structure
typedef struct {
    Stack_Entry entry[MAX];
    int top;
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

void StackTopUserLevel(Stack *ps, Stack_Entry *pe);

Stack_Entry FindMin();

Stack_Entry FirstElement(Stack *ps, Stack_Entry *PFirstElement);

void MakeCopy(Stack *ps, Stack *pcopy);

int StackSize(Stack *ps);

#endif //STACK_STACK_H
