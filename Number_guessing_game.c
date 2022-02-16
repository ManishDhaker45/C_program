#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, attempts = 1;
    srand(time(0));
    number = rand() % 100 + 1; // Generates random number between 1-100
    // printf("The number is %d \n", number);
    do
    {
        printf("\n Enter the number between 1 to 100: ");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("\n Lower number please\n");
        }
        else if (guess < number)
        {
            printf("\nHigher number please\n");
        }
        else
        {
            printf("\n YEAH!! YOU DID IT!\n");
            printf("Total attempts were: %d", attempts);
        }
        attempts++;

    } while (number != guess);
    return 0;