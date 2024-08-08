#include <bits/stdc++.h>
using namespace std;
void playGame();
void showMenu();

int main() {
    bool playAgain = true;

    while (playAgain) {
        showMenu();
        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                playGame();
                break;
            case 2:
                cout << "Exiting the game. Goodbye!" << endl;
                playAgain = false;
                break;
            default:
                cout << "Invalid choice. Please select 1 or 2." << endl;
        }
    }

    return 0;
}

void showMenu() {
    cout << "Welcome to the Simple Number Guessing Game!" << endl;
    cout << "1. Play Game" << endl;
    cout << "2. Exit" << endl;
    cout << "Enter your choice: ";
}

void playGame() {
    srand(static_cast<unsigned int>(time(nullptr))); 
    int randomNumber = rand() % 100 + 1;
    int userGuess = 0;
    int numberOfGuesses = 0;
    int score = 100; 

    cout << "I have picked a number between 1 and 100. Try to guess it!" << endl;

    while (userGuess != randomNumber) {
        cout << "Enter your guess: ";
        cin >> userGuess;

        numberOfGuesses++;
        score -= 10; 

        if (userGuess > randomNumber) {
            cout << "Too high! Try again." << endl;
        } else if (userGuess < randomNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number in " << numberOfGuesses << " tries." << endl;
            cout << "Your score is: " << score << endl;
        }
    }
}
