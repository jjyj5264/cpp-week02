#include <iostream>

void game() {
    int answer = 0; // answer

    std::cout << "Enter the answer: ";
    std::cin >> answer;

    // stores the number in each digit.
    int answer100 = answer / 100;
    int answer10 = (answer % 100) / 10;
    int answer1 = answer % 10;

    while (true) {
        int strikes = 0;
        int balls = 0;

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
            break; // exit the game
        }

        std::cout << "Strikes: " << strikes << ", Balls: " << balls << std::endl;
    }
}