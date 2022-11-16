#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()
{
    int playerScore = 0, computerScore = 0;
    srand(time(0));
    int random = rand() % 3 + 1;
    // rock=1
    // paper=2
    // scissors=3
    int rounds;
    printf("How many rounds would you like to play?\n>> ");
    scanf("%d", &rounds);
    for (int i = 1; i <= rounds; i++)
    {
        printf("Press 'r' for rock, 'p' for paper, and 's' for scissors\n>> ");
        char playerPick;
        scanf("%c", &playerPick);
        scanf("%c", &playerPick);
        if (playerPick == 'r' || playerPick == 'p' || playerPick == 's')
        {
            // When computer's pick is rock
            if (random == 1 && playerPick == 'r')
            {
                printf("Player's pick = rock\n");
                printf("Computer's pick = rock\n");
                printf("----------------------------\n");
                printf("Round Tied!\n");
                printf("----------------------------\n");
            }
            else if (random == 1 && playerPick == 'p')
            {
                printf("Player's pick = paper\n");
                printf("Computer's pick = rock\n");
                printf("----------------------------\n");
                printf("Player wins the round!\n");
                printf("----------------------------\n");
                playerScore++;
            }
            else if (random == 1 && playerPick == 's')
            {
                printf("Player's pick = scissors\n");
                printf("Computer's pick = rock\n");
                printf("----------------------------\n");
                printf("Computer wins the round!\n");
                printf("----------------------------\n");
                computerScore++;
            }

            // When computer's pick is paper
            if (random == 2 && playerPick == 'r')
            {
                printf("Player's pick = rock\n");
                printf("Computer's pick = paper\n");
                printf("----------------------------\n");
                printf("Computer wins the round!\n");
                printf("----------------------------\n");
                computerScore++;
            }
            else if (random == 2 && playerPick == 'p')
            {
                printf("Player's pick = paper\n");
                printf("Computer's pick = paper\n");
                printf("----------------------------\n");
                printf("Round Tied!\n");
                printf("----------------------------\n");
            }
            else if (random == 2 && playerPick == 's')
            {
                printf("Player's pick = scissors\n");
                printf("Computer's pick = paper\n");
                printf("----------------------------\n");
                printf("Player wins the round!\n");
                printf("----------------------------\n");
                playerScore++;
            }

            // When computer's pick is scissors
            if (random == 3 && playerPick == 'r')
            {
                printf("Player's pick = rock\n");
                printf("Computer's pick = scissors\n");
                printf("----------------------------\n");
                printf("Player wins the round!\n");
                printf("----------------------------\n");
                playerScore++;
            }
            else if (random == 3 && playerPick == 'p')
            {
                printf("Player's pick = paper\n");
                printf("Computer's pick = scissors\n");
                printf("----------------------------\n");
                printf("Computer wins the round!\n");
                printf("----------------------------\n");
                computerScore++;
            }
            else if (random == 3 && playerPick == 's')
            {
                printf("Player's pick = scissors\n");
                printf("Computer's pick = scissors\n");
                printf("----------------------------\n");
                printf("Round Tied!\n");
                printf("----------------------------\n");
            }
        }
        else
        {
            printf("----------------------------\n");
            printf("Invalid option entered. Try again.\n");
            printf("----------------------------\n");
            i--;
        }
    }
    printf("==========================\n");
    printf("End of %d rounds\n", rounds);
    printf("==========================\n");
    printf("Final Scores:\n");
    printf("Player's score = %d\n", playerScore);
    printf("Computer's score = %d\n", computerScore);
    printf("**************************\n");
    if (playerScore > computerScore)
    {
        printf("Player wins the round!\n");
    }
    else if (playerScore < computerScore)
    {
        printf("Computer wins the round!\n");
    }
    else
    {
        printf("Match Tied!\n");
    }
}
