#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Prototypes from game.h added inline to avoid missing include file */
void print_menu(void);
int get_computer_choice(void);
void print_choice(int choice);
int determine_winner(int user, int computer);

int main() {
    int user, computer, result;
    char playAgain;

    srand(time(NULL)); // Initialize random seed

    do {
        print_menu();
        scanf("%d", &user);

        if (user < 0 || user > 2) {
            printf("Invalid choice. Try again.\n");
            continue;
        }

        computer = get_computer_choice();

        printf("You chose: ");
        print_choice(user);
        printf("\n");

        printf("Computer chose: ");
        print_choice(computer);
        printf("\n");

        result = determine_winner(user, computer);

        if (result == 0)
            printf("Result: It's a tie!\n");
        else if (result == 1)
            printf("Result: You win!\n");
        else
            printf("Result: Computer wins!\n");

        printf("Play again? (y/n): ");
        scanf(" %c", &playAgain);

        printf("\n");

    } while (playAgain == 'y' || playAgain == 'Y');

    printf("Thank you for playing!\n");

    return 0;
}
