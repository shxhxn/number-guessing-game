#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator using the current time
    srand(time(0));

    // Generate random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int guessed;
    int no_of_guesses = 0;

    do
    {
      printf("Guess the number: \n");
      scanf("%d", &guessed);
      if(guessed>randomNumber){
        printf("Think of something lower\n");
      }
      else{
        printf("Think of something higher\n");
      }
      no_of_guesses++;
    } while (guessed!=randomNumber);
    
   printf("You guessed the number in %d guesses", no_of_guesses);

    return 0;
}
