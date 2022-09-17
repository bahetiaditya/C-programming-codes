#include <stdio.h>

int stack[8], top = -1;
int push(int data)
{
    if (top == 7)
    {
        printf("stack overflow\n");
    }
    else
    {
        top = top + 1;
        stack[top] = data;
    }
}
int pop()
{
    if (top == -1)
    {
        printf("stack is empty\n");
    }
    else
    {
        int data;
        data = stack[top];
        top--;
        return data;
    }
}
void display(void)
{
    for (int i = 0; i <= top; i++)
    {
        printf("%d\n", stack[i]);
    }
}

int main()
{
    int data, n, a;
    do
    {
        printf("1. push\n");
        printf("2. pop\n");
        printf("3. display\n");
        printf("4. exit\n");
        printf("enter the choice : ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            printf("enter the number to push in stack : ");
            scanf("%d", &a);
            push(a);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();

            printf("\n");
            break;
        case 4:
            break;

        default:
            printf("enter the valid choice !\n");
            break;
        }
    } while (n != 4);

    return 0;
}