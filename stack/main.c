#include "Stack.h"

int main() {
    //Test the function of the stack
    /*Stack s;
    CreateStack(&s);
    Push(&s, 100);
    Push(&s, 1);
    Push(&s, 22);
    Push(&s, -1);
    Push(&s, 1);

    if (!IsEmpty(&s)) {
        printf("The Minimum Element in the stack is %d\n", FindMin());
    }

    if (!IsEmpty(&s)) {
        Stack_Entry element;
        Pop(&s, &element);
        printf("The Poped Element from the stack is %d\n", element);
    }

    if (!IsFull(&s)) {
        Stack_Entry element = -10;
        Push(&s, element);
        printf("The Minimum Element in the stack is %d\n", FindMin());
    }

    if (!IsEmpty(&s)) {
        Stack_Entry element;
        StackTop(&s, &element);
        printf("The Top Element in the stack is %d\n", element);
        StackTopUserLevel(&s, &element);
        printf("The Top Element in the stack is %d\n", element);
    }

    if (!IsEmpty(&s)) {
        Stack_Entry element;
        FirstElement(&s, &element);
        printf("The First Element in the stack is %d\n", element);
    }

    Stack Cstack;
    CreateStack(&Cstack);
    MakeCopy(&s,&Cstack);
    Stack_Entry element;
    TraverseStack(&Cstack,Display);
    printf("The Size of The Stack is %d\n", StackSize(&s));
    ClearStack(&s);
    printf("The Size of The Stack is %d\n", StackSize(&s));*/


    //task 6


    Stack s;
    CreateStack(&s);
    int n;
    scanf("%d", &n);
    fflush(stdin);
    int flag=0;
    //any odd number not valid
    if(n%2==1){
        flag=1;
    }
    char arr[n+1];
    for (int i = 0; i < n; ++i) {
        scanf("%c", &arr[i]);
        if (arr[i] == '(' || arr[i] == '{' || arr[i] == '<' || arr[i] == '[') {
            Push(&s,arr[i]);
        }else if(IsEmpty(&s)){
        flag=1;
        } else{
            char check;
            StackTop(&s,&check);
            if(arr[i]==')'){
                if(check+1==arr[i])//this line from ASCII code
                {
                    Pop(&s,&check);
                }
            }
            else if(check+2==arr[i])//this line from ASCII code
            {
                Pop(&s,&check);
            }
            else{
                flag=1;
            }

        }
    }
if(flag==1||!IsEmpty(&s)){
    printf("Error, Not Valid");
}else if(IsEmpty(&s)){
    printf("Valid");
}
/*Test cases
 8
{}<><{}>
Valid
8
{}{[()]]
Error, Not Valid
7
    {[]}[[]
    Error, Not Valid
 */

    return 0;
}

