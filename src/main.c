#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int player, computer;

    printf("Rock, Paper, Scissors Game!\n");
    printf("0 = Rock\n1 = Paper\n2 = Scissors\n");

    printf("Enter your choice (0-2): ");
    scanf("%d", &player);

    if (player < 0 || player > 2) {
        printf("Invalid choice! Please enter 0, 1, or 2.\n");
        return 0;
    }

    srand(time(0));
    computer = rand() % 3;

    printf("You chose: %d\n", player);
    printf("Computer chose: %d\n", computer);

    if (player == computer) {
        printf("It's a draw!\n");
    }
    else if ((player == 0 && computer == 2) ||
             (player == 1 && computer == 0) ||
             (player == 2 && computer == 1)) {
        printf("You win!\n");
    }
    else {
        printf("Computer wins!\n");
    }

    return 0;
}

