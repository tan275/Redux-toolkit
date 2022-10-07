#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, guess, nguess;
    srand((time(0)));
    number = rand() % 100 + 1; // it generates ramdom number b/w 100 and 1
    //printf("the random number is %d\n", number);

    do
    {
        printf("Guess a number b/w 1 to 100\n");
        scanf("%d", &guess);

        if (guess > number)
        {
            printf("lower number please \n");
        }
        else if (guess < number)
        {
            printf("higher number please\n");
        }
        else
        {
            printf("u guessed in %d attempts", nguess);
        }
        nguess++;
    } while (guess != number);
    return 0;
}