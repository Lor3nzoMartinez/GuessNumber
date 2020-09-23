#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int tries = 3;
    srand(time(0));
    int randNumber = rand() % 10 + 1;
    int answer;
    bool won = false;

    cout << "Hello and welcome to GUESS THAT NUMBER!" << endl << "You will have " << tries << " tries";
    cout << " to guess the number between 1 and 10 that has been generated." << endl << endl;

    for (int i = 0; i < 3; ++i) {
        if (answer == randNumber) {
            won = true;
            break;
        } else {
            cout << "Guess number " << i + 1 << " : ";
            cin >> answer;
            cout << endl;
        }
    }

    if (!won) {
        cout << "Sorry better luck next time. The number was " << randNumber << "." << endl;
    } else {
        cout << "Congrats! You did it! The number was " << randNumber << "!" << endl;
    }

    return 0;
}
