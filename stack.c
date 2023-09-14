#include <stdio.h>
#include <stdlib.h>
#define SIZE 4

void push();
void pop();
void show();

int top = -1;
int array[SIZE];

int main()
{
    int input;

    while (1)
    {
        
        printf("STACK OPERATION\n");
        printf("Enter what you want to do on the stack \n 1. PUSH \n 2. POP \n 3. SHOW\n 4. EXIT\n");
        scanf("%d", &input);
        if (input == 1)
        {
            if (top == SIZE - 1)
            {
                printf("The stack is full\n");
            }
            else
            {
                push();
            }
        }

        else if (input == 2)
        {

            if (top == -1)
            {
                printf("Nothing here on stack\n");
            }

            else
            {
                pop();
            }
        }

        else if (input == 3)
        {
            if (top == -1)
            {
                printf("Nothing here on stack\n");
            }

            else
            {
                show();
            }
        }

        else if (input == 4){
            return 0;
        }

        else
        {
            printf("invalid input");
        }

        
    }
    return 0;

}


    void push()
    {
        int value;
        printf("\nEnter the element to insert on stack: ");
        scanf("%d", &value);
        printf("\n");
        top = top + 1;
        array[top] = value;
    }

    void pop()
    {

        printf("popped value %d \n", array[top]);
        top = top -1;
    }
    void show()
    {
        printf("Elements on the stack \n ");
        for( int i = top ; i >= 0 ; --i ){
            printf("%d ",array[top]);
            
        }
        printf("\n");
    }
