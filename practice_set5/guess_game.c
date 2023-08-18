#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int random_number, user_input, count = 1;
    srand(time(NULL));
    random_number = rand() % 100;

    printf("Enter Random number from 1 to 100: ");

    scanf("%d", &user_input);

    if (user_input>100 || user_input < 0 ){
        printf("Invalid Input");
    }
    while (1)
    {
        count++;
        if (user_input < random_number)
        {
            printf("\nHigher number please: ");
            scanf("%d", &user_input);
        }
        if (user_input > random_number)
        {
            printf("\nLower number please: ");

            scanf("%d", &user_input);
        }
        if (user_input == random_number)
        {
            printf("\nYAY!! You guessed the right answer in %d counts", count);
            break;
        }
    }

    return 0;
}