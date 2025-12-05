#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int player, computer;

    // Display game options
    printf("Rock, Paper, Scissors Game!\n");
    printf("0 = Rock\n1 = Paper\n2 = Scissors\n");

    // Get player's choice
    printf("Enter your choice (0-2): ");
    scanf("%d", &player);

    // Validate input
    if (player < 0 || player > 2) {
        printf("Invalid choice! Please enter 0, 1, or 2.\n");
        return 0;
    }

    // Initialize random generator and generate computer's choice
    srand(time(0));
    computer = rand() % 3;

    // Show choices
    printf("You chose: %d\n", player);
    printf("Computer chose: %d\n", computer);

    // Determine the result
    if (player == computer) {
        printf("It's a draw!\n");
    }
    else if ((player == 0 && computer == 2) ||  // Rock beats Scissors
             (player == 1 && computer == 0) ||  // Paper beats Rock
             (player == 2 && computer == 1)) {  // Scissors beats Paper
        printf("You win!\n");
    }
    else {
        printf("Computer wins!\n");
    }

    return 0;
}
