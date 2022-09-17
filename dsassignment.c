#include <stdio.h>
int stack[8];
int top = -1;
int pop()
{
    int data;
    data = stack[top];
    top--;
    return data;
}
int push(int data)
{
    stack[top] = data;
    top++;
}
int main()
{

    push(10);
    push(20);
    push(15);
    push(17);
    pop();
    push(25);
    push(30);
    pop();
    pop();
    push(45);
    push(90);
    //     printf("elements in stack : \n");
    for (int i = -1; i < top; ++i)
    {

        printf("%d\n", stack[i]);
    }

    return 0;
}