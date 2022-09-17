// #include <stdio.h>
// #include <stdlib.h>
// struct stack
// {
//     int size;
//     int *arr;
//     int top;
// };
// int isEmpty(struct stack *ptr)
// {
//     if (ptr->top == -1)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }
// int isFull(struct stack *ptr)
// {
//     if (ptr->top == ptr->size - 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }

// int main()
// {
//     struct stack *s;
//     s->size = 80;
//     s->top = -1;
//     s->arr = (int *)malloc(s->size * sizeof(int));
//     *s->arr = 78;
//     s->top += 1;
//     if (isEmpty(s))
//     {
//         printf("stack is empty.\n");
//     }
//     else
//     {
//         printf("stack is not empty.\n");
//     }

//     printf("number in stack : %d\n", *s->arr);
//     printf("top : %d\n", s->top);
//     return 0;
// }
#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int top;
    char *arr;
    int size;
};
int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    struct stack *s1;

    s1->size = 8;
    s1->top = -1;
    s1->arr = (char *)malloc(s1->size * sizeof(char));
    if (isFull(s1))
    {
        printf("stack over flowed.");
    }
    else
    {
        s1->top++;
        printf("enter the character to push : ");
        scanf("%c", &s1->arr);
    }
    printf("\ncharacter in stack is : %c", s1->arr);
    printf("\n");
    return 0;
}