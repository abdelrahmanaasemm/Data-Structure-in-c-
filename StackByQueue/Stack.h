//
// Created by user1 on 6/29/2024.
//
#include <stdio.h>
#include "stdlib.h"

#ifndef STACK_STACK_H
#define STACK_STACK_H
#define MAX 100

typedef int Stack_Entry;
//structure
typedef struct {
    Stack_Entry entry[MAX];
    int top;
} Stack;

void CreateStack(Stack *ps);

int StackEmpty(Stack *ps);

int StackFull(Stack *ps);

void Push(Stack *ps, Stack_Entry item);

void Pop(Stack *ps, Stack_Entry *pe);

void StackTop(Stack *ps, Stack_Entry *pe);

void ClearStack(Stack *ps);

int StackSize(Stack *ps);

#endif //STACK_STACK_H
