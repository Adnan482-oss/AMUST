#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_BALLS 100
#define PLAYERS 2

void displayScoreboard(int scoreboard[PLAYERS][MAX_BALLS], int balls, int playerScore, int computerScore) {
    printf("\nScoreboard:\n");
    printf("Ball\tPlayer\tComputer\n");
    for (int i = 0; i < balls; i++) {
        printf("%d\t%d\t%d\n", i + 1, scoreboard[0][i], scoreboard[1][i]);
    }
    printf("\nFinal Scores:\n");
    printf("Player: %d\nComputer: %d\n", playerScore, computerScore);
}

int main() {
    srand(time(0));

    int playerChoice, tossResult;
    int playerScore = 0, computerScore = 0;
    int balls, run, playerFirst;
    int scoreboard[PLAYERS][MAX_BALLS] = {0};

    printf("Welcome to the Cricket Game!\n");
    printf("Toss Time! Choose: 0 for Heads, 1 for Tails: ");
    scanf("%d", &playerChoice);

    tossResult = rand() % 2;
    printf("The toss result is: %s\n", tossResult == 0 ? "Heads" : "Tails");

    if (playerChoice == tossResult) {
        printf("You won the toss! Choose:\n1. Bat first\n2. Bowl first\n");
        scanf("%d", &playerFirst);
        playerFirst = (playerFirst == 1) ? 1 : 0;
    } else {
        printf("Computer won the toss!\n");
        playerFirst = rand() % 2;
        printf("Computer chose to %s first.\n", playerFirst ? "bat" : "bowl");
    }

    printf("\nEnter the number of balls for the game (max %d): ", MAX_BALLS);
    scanf("%d", &balls);
    if (balls > MAX_BALLS) {
        printf("Too many balls! Setting to maximum allowed (%d).\n", MAX_BALLS);
        balls = MAX_BALLS;
    }

    if (playerFirst) {
        printf("\nYour turn to bat!\n");
        for (int i = 0; i < balls; i++) {
            run = rand() % 7;
            printf("Ball %d: You scored %d runs.\n", i + 1, run);
            playerScore += run;
            scoreboard[0][i] = run;
        }
        printf("Your total score: %d\n", playerScore);

        printf("\nComputer's turn to bat!\n");
        for (int i = 0; i < balls; i++) {
            run = rand() % 7;
            printf("Ball %d: Computer scored %d runs.\n", i + 1, run);
            computerScore += run;
            scoreboard[1][i] = run;
        }
        printf("Computer's total score: %d\n", computerScore);
    } else {
        printf("\nComputer's turn to bat!\n");
        for (int i = 0; i < balls; i++) {
            run = rand() % 7;
            printf("Ball %d: Computer scored %d runs.\n", i + 1, run);
            computerScore += run;
            scoreboard[1][i] = run;
        }
        printf("Computer's total score: %d\n", computerScore);

        printf("\nYour turn to bat!\n");
        for (int i = 0; i < balls; i++) {
            run = rand() % 7;
            printf("Ball %d: You scored %d runs.\n", i + 1, run);
            playerScore += run;
            scoreboard[0][i] = run;
        }
        printf("Your total score: %d\n", playerScore);
    }

    displayScoreboard(scoreboard, balls, playerScore, computerScore);

    if (playerScore > computerScore) {
        printf("\nCongratulations! You won by %d runs.\n", playerScore - computerScore);
    } else if (playerScore < computerScore) {
        printf("\nComputer won by %d runs. Better luck next time!\n", computerScore - playerScore);
    } else {
        printf("\nIt's a tie!\n");
    }

    return 0;
}
