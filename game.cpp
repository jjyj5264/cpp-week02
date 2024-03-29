#include <iostream>

// Current Version: v3

int getRandomAnswer();

void game() {
    int chance = 5;
    int answer = getRandomAnswer();

    // stores the number in each digit.
    int answer100 = answer / 100;
    int answer10 = (answer % 100) / 10;
    int answer1 = answer % 10;

    // std::cout << "The Answer is: " << answer100 << answer10 << answer1 << std::endl;

    while (true) {
        if (chance == 0) {
            std::cout << "You lose!";
            break; // exit the game.
        }

        int strikes = 0;
        int balls = 0;

        std::cout << chance << " chances left." << std::endl;

        // user input
        int userGuess = 0; // guess
        
        std::cout << "Enter the guess: ";
        std::cin >> userGuess;

        // stores the number in each digit.
        int userguess100 = userGuess / 100;
        int userguess10 = (userGuess % 100) / 10;
        int userguess1 = userGuess % 10;

        if (userguess100 == answer100) { // third digit
            strikes++;
        } else if (userguess100 == answer10 || userguess100 == answer1) {
            balls++;
        }
        
        if (userguess10 == answer10) { // second digit
            strikes++;
        } else if (userguess10 == answer100 || userguess10 == answer1) {
            balls++;
        }

        if (userguess1 == answer1) { // first digit
            strikes++;
        } else if (userguess1 == answer10 || userguess1 == answer100) {
            balls++;
        }

        if (strikes == 3) { // when correct
            std::cout << "You win!";
            break; // exit the game.
        } else {
            chance--;
        }

        std::cout << "Strikes: " << strikes << ", Balls: " << balls << std::endl;
    }
}