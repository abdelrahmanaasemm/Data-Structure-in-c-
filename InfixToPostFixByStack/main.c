

#include "Stack.h"
#include "ctype.h"

int priority(char c) {
    if (c == '-' || c == '+') {
        return 1;
    } else if ((c == '*' || c == '/')) {
        return 2;
    } else if (c == '^') {
        return 3;
    }
    return 0;
}
void InToPost(Stack_Entry expression[MAX],Stack *ps){
    int i = 0;
    while (expression[i] != '\0') {
        if (isalnum(expression[i])) {
            printf("%c", expression[i]);
        } else if (expression[i] == '(') {
            Push(ps, expression[i]);
        } else if (expression[i] == ')') {
            Stack_Entry e ;
            if (IsEmpty(ps)) {
                printf("error 404");
                return ;
            }
            StackTop(ps, &e);
            while (e != '(') {
                Stack_Entry element;
                Pop(ps, &element);
                printf("%c", element);
                StackTop(ps, &e);
            }
            Pop(ps, &e);
        } else if (expression[i] == ' ') {
        } else {
            Stack_Entry e ;
            if (!IsEmpty(ps)) {
                StackTop(ps, &e);
            }


            while (!IsEmpty(ps) && priority(expression[i]) <= priority(e)) {
                Stack_Entry op;
                Pop(ps, &op);
                printf("%c", op);
                if (IsEmpty(ps)) break;
                StackTop(ps, &e);
            }
            Push(ps, expression[i]);
        }
        i++;
    }

    while (!IsEmpty(ps)) {
        Stack_Entry e ;
        StackTop(ps, &e);
        printf("%c", e);
        Pop(ps,&e);
    }


}
int main() {
    Stack_Entry expression[MAX];
    Stack s;
    CreateStack(&s);
    printf("Enter Infix expression :");
    gets(expression);
    printf("Postfix Expression: ");
    InToPost(expression,&s);


    return 0;
}
/*
  First Run:
Enter Infix expression : A+(B*C-(D/E^F)*G)*H
Postfix Expression: ABC*DEF^/G*-H*+

Second Run:
Enter Infix expression : (3^2*5)/(3*2-3)+5
Postfix Expression: 32^5*32*3-/5+
 */