#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int generateNumber () {                     // Ham sinh so ngau nhien theo thoi gian thuc
    srand(time(0));
    return rand() % 100 + 1;                // random from 1 to 100
}

int getAnswer () {
    int guess;
    do {
        cout << "Enter your guess (1 -> 100): ";
        cin >> guess;

        if (guess < 1 || guess > 100) {
            cout << "Your guess is not in the range from 1 to 100. Plz enter again!" << endl;
        }
    } while (guess < 1 || guess > 100);

    return guess;
}

void printAnswer (int secretNumber, int guess) {
    if (guess > secretNumber) {
        cout << "The secret number is smaller." << endl;
    } else if (guess < secretNumber) {
        cout << "The secret number is bigger." << endl;
    } else {
        cout << "Congratulations!. You win." << endl;
    }
}

void playGuessIt () {
    int countNumberGuess = 0;
    int secretNum = generateNumber();
    int guess;

    do {
        guess = getAnswer();
        printAnswer(secretNum,guess);
        countNumberGuess ++;
        cout << "Number of guess: " << countNumberGuess << endl;
    } while (guess != secretNum);
}
int main () {
    int choice;
    do {
        playGuessIt();
        cout << "Do you want to play anymore ?" << endl;
        cout << "Press 1(YES) or 0(NO): ";
        cin >> choice;

        if (choice == 0) cout << endl << "... Exiting ...";
    } while (choice == 1);

    return 0;
}