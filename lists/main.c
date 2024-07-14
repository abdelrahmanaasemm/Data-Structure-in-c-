#include "list.h"
int main() {
    list l;
    CreateList(&l);
    InsertList(&l,0,1);
    InsertList(&l,0,3);
    InsertList(&l,0,4);
    InsertList(&l,0,2);
    InsertList(&l,0,72);
    InsertList(&l,0,9);
    InsertList(&l,1,100);
    InsertList(&l,1,1);
    printf("The List Size is %d \n", ListSize(&l));
    TraverseList(&l,DisplayList);
    List_Entry element;
    DeleteList(&l,0,&element);
    printf("the element %d is delated\n",element);
    RetrieveList(&l,0,&element);
    printf("The first element in the list is %d \n",element);
    ReplaceList(&l,0,0);
    RetrieveList(&l,0,&element);
    printf("The first element in the list is replaced by %d \n",element);
    printf("The Sum of the list is %ld \n", ListSum(&l));
    ReverseList(&l);
    TraverseList(&l,DisplayList);
    printf("The Middle Element is %d\n",ListMiddle(&l));
    printf("The Maximum Element is %d\n",MaxList(&l));

    Destroy(&l);
    printf("The List Size is %d \n", ListSize(&l));
    printf("The Sum of the list is %ld \n", ListSum(&l));

    return 0;
}
