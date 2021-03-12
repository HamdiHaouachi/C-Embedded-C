#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct elt {
    struct elt *next;
    int value;
};

typedef struct elt *Stack;

#define STACK_EMPTY (0)

void stackPush(Stack *s, int value)
{
    struct elt *e;

    e = malloc(sizeof(struct elt));
    assert(e);

    e->value = value;
    e->next = *s;
    *s = e;
}

int stackEmpty(const Stack *s)
{
    return (*s == 0);
}

int stackPop(Stack *s)
{
    int ret;
    struct elt *e;

    assert(!stackEmpty(s));

    ret = (*s)->value;

    e = *s;
    *s = e->next;

    free(e);

    return ret;

}

void stackPrint(const Stack *s)
{
    struct elt *e;

    for(e = *s; e!=0; e=e->next) {
        printf("%d \n", e->value);
    }

    putchar('\n');
}

/**************************/
/********* main ***********/
/**************************/

int main(int argc, char **argv)
{
    int i;
    Stack s;

    s = STACK_EMPTY;

    for(i = 0; i<5; i++) {
        printf("push %d \n", i);
        stackPush(&s, i);
        stackPrint(&s);
    }

    while(!stackEmpty(&s)) {
        printf("pop gets %d\n", stackPop(&s));
        stackPrint(&s);
    }

    return 0;
}