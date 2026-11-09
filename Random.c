/**We will write a program that generates a random number and asks the player to guess
it. If the player’s guess is higher than the actual number, the program displays “Lower
number please”. Similarly, if the user’s guess is too low, the program prints “Higher
number please”.
When the user guesses the correct number, the program displays the number of
guesses the player used to arrive at the number.**/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(0));

    int randomno = (rand() % 100) + 1;
    int guesses_no = 0;
    int guesses;
    //printf("Random number = %d\n", randomno);
    do
    {
        printf("Guesses the number : ");
        scanf("%d", &guesses);
        if (guesses > randomno)
        {
            printf("Lower number please\n");
        }
        else if (guesses < randomno)
        {
            printf("Higher number please\n");
        }
        guesses_no++;
    } while (guesses != randomno);
        printf("You guess the number %d",guesses_no);
    return 0;
}