#include <stdio.h>
#include <stdlib.h>
typedef int List_Entry;
typedef struct listnode{
    List_Entry info;
    struct listnode *next;
}listnode;
typedef struct list{
    int size;
    listnode *head;
}list;

 void CreateList(list*pl);
 int ListEmpty(list*pl);
 int ListFull(list*pl);
 int ListSize(list *pl);
 void Destroy(list*pl);
 void TraverseList(list *pl,void(*pf)(List_Entry));
 int InsertList(list*pl,int pos,List_Entry e);
void RetrieveList(list *pl,int pos,List_Entry *pe);
void DeleteList(list *pl,int pos,List_Entry *pe);
void ReplaceList(list*pl,int pos,List_Entry e);
void DisplayList(List_Entry element);
long long ListSum(list *pl);
void ReverseList(list *pl);
List_Entry ListMiddle(list *pl);
List_Entry MaxList(list*pl);
