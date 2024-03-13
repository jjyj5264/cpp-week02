#include <cstdlib>
#include <ctime>

// Current version: v3

void initializeSeed() {
    std::srand(std::time(0));
}

int getRandomAnswer() {
    int first = 0;
    int second = 0;
    int third = 0;

    while (true) {
        first = std::rand() % 10; // 0 - 9
        second = std::rand() % 10;
        third = std::rand() % 10;

        if (!(first == second || first == third || second == third)) {
            break;
        }
    }

    return (third * 100) + (second * 10) + first;
}