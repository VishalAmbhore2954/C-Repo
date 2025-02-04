#include <stdio.h>
#include <stdlib.h>

struct Queue
{
    int front;
    int rare;
    int cap;
    int *arr;
};

struct Queue *createQue(int size)
{
    struct Queue *p;
    p = (struct Queue *)malloc(sizeof(struct Queue));
    p->front = -1;
    p->rare = -1;
    p->cap = size;
    p->arr = (int *)calloc(p->cap, sizeof(int));
    return p;
}

int isEmpty(struct Queue *q)
{
    if (q->front && q->rare == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct Queue *q)
{
    if ((q->rare + 1) % (q->cap) == (q->front))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void Add(struct Queue *q)
{
    if (q->rare && q->front == -1)
    {
        q->rare = q->front = 0;
        printf("Enter a data : ");
        scanf("%d", &q->arr[q->rare]);
    }
    else if (!isFull(q))
    {
        q->rare = (q->rare + 1) % (q->cap);
        printf("Enter a data : ");
        scanf("%d", &q->arr[q->rare]);
    }
    else
    {
        printf("Queue is full :\n");
    }
}

void Remove(struct Queue *q)
{
    int data;
    if (!isEmpty(q))
    {
        data = q->arr[q->front];
        if (q->rare == q->front)
        {
            q->rare = q->front = -1;
        }
        else
        {
            q->front = (q->front + 1) % (q->cap);
        }
        printf("Deleted element is %d\n", data);
    }
    else
    {
        printf("Queue is empty!\n");
    }
}

void Peek(struct Queue *q)
{
    if(!isEmpty(q)){
        printf("%d\n", q->arr[q->front]);
    }else{
        printf("Queue is empty!\n");
    }
}

void deleteQueue(struct Queue *q)
{
    q->front = q->rare = -1;
    free(q);
}

int main()
{
    int size, ch;
    printf("Enter the size of queue : ");
    scanf("%d", &size);

    struct Queue *Q = createQue(size);
    printf("1. Add element\n");
    printf("2. Remove element\n");
    printf("3. Peek element\n");
    printf("4. Size of queue\n");
    printf("5. Delete Whole Queue\n");
    printf("6. Exit\n");

    while (1)
    {
        printf("Enter your choice :\n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            Add(Q);
            break;
        case 2:
            Remove(Q);
            break;
        case 3:
            Peek(Q);
            break;
        case 4:
            // SizeQ(Q);
            break;
        case 5:
            deleteQueue(Q);
            break;
        case 6:
            printf("You are exit now");
            exit(0);
        default:
            printf("Invalid Choice!\n");
        }
    }

    return 0;
}