#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int answer;
    bool won = false;
    int keepGoing = 0;

    do {
        srand(time(0));
        int randNumber = rand() % 10 + 1;

        cout << endl << "Hello and welcome to GUESS THAT NUMBER!" << endl << "You will have 3 tries";
        cout << " to guess the number between 1 and 10 that has been generated." << endl << endl;
        cout << "---" << randNumber <<"---" << endl << endl;

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
            cout << "Sorry better luck next time. The number was " << randNumber << "." << endl << endl;
            cout << "Would you like to play again? [Type 1 to Play Again]" << endl;
            cin >> keepGoing;
        } else {
            cout << "Congrats! You did it! The number was " << randNumber << "!" << endl << endl;
            cout << "Would you like to play again? [Type 1 to Play Again]" << endl;
            cin >> keepGoing;
        }
    } while (keepGoing == 1);

    cout << "Thanks for playing the game" << endl;

    return 0;
}
