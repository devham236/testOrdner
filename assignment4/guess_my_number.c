#include <stdio.h>
#include "base.h"

int main(void)
{
    printf("Guess my number!\n");
    int target = i_rnd(100);
    int guess = 0;

    while (target != guess)
    {
        scanf("%d", &guess);

        if (guess > target)
        {
            printf("Too large!\n");
        }
        else if (guess < target)
        {
            printf("Too small!\n");
        }
    }

    printf("Match!\n");

    return 0;
}