#include <stdio.h>
#include<stdlib.h>

struct stack
{
    int top;
    int cap;
    int *arr;
};

int isFull(struct stack *st)
{
    if (st->top == st->cap - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty(struct stack *st)
{
    if (st->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *st)
{
    if (!isFull(st))
    {
        st->top++;
        printf("Enter a Data : \n");
        scanf("%d", &st->arr[st->top]);
    }
    else
    {
        printf("Stack is full : \n");
    }
}

void pop(struct stack *st)
{
    if (!isEmpty(st))
    {
        int data;
        data = st->arr[st->top];
        st->top--;
        printf("Popped element is %d", data);
    }
    else
    {
        printf("Stack is Empty : \n");
    }
}

int main()
{
    int ch, size;
    struct stack *st;
    printf("Enter size of stack : ");
    scanf("%d", &size);

    st = (struct stack *)malloc(sizeof(struct stack));
    st->top = -1;
    st->cap = size;
    st->arr = (int *)calloc(st->cap, sizeof(int));

    printf("press 1. push element :\n");
    printf("press 2. pop element :\n");
    printf("press 3. Exit :\n");
    while (1)
    {
        printf("Enter your choice :\n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            push(st);
            break;
        case 2:
            pop(st);
            break;
        case 3:
            exit(0);
            break;
        default:
            printf("Wrong input!");
        }
    }
    return 0;
}