#include <cstdlib>
#include <ctime>

void initializeSeed() {
    std::srand(std::time(0));
}

int getRandomAnswer() {
    return std::rand() % 1000; // 000 - 999
}