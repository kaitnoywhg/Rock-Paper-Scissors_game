#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    printf("---MENU---\n1-Rock\n2-Paper\n3-Scissors\n");
    int move1, move2, attempt = 3;
    int player_score = 0, comp_score = 0;
    while(attempt > 0) {
        printf("\nSCORE:\nYou: %d -- Computer: %d\nAttempts left: %d\nYour move: ", 
                player_score, comp_score, attempt);
        scanf("%d", &move1);
        
        if(move1 < 1 || move1 > 3) {
            printf("Input error! Please enter 1, 2 or 3\n");
            continue;
        }

        move2 = rand() % 3 + 1;
        printf("Computer chose: %d\n", move2);
        if(move1 == move2) {
            printf("Draw, try again\n");
            continue;
        }
        
        if((move1 == 1 && move2 == 3) || (move1 == 2 && move2 == 1) || (move1 == 3 && move2 == 2)){    
            printf("You are winner!\n");
            player_score++;
        } else {
            printf("Computer wins!\n");
            comp_score++;
        }
        attempt--;
    }
    
    printf("\n=== GAME OVER ===\n");
    printf("FINAL SCORE: You %d : %d Computer\n", player_score, comp_score);
    if(player_score > comp_score) {
        printf("Congratulations! You won the game!\n");
    } else if(player_score < comp_score) {
        printf("Computer won the game!\n");
    } else {
        printf("It's a draw!\n");
    }
    return 0;
}