#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
 
int main()
{
    cout<<endl;
    cout << "     *** PLAY THE GUESSING NUMBER GAME ***"<< endl;
    cout<<"---------------------------------------------------------"<<endl;
    cout<<endl;
    cout << " You have to Guess a number between 1 and 50. " << endl;
 
    while (true) {
        cout << "\nChoose your difficulty level:"<<endl;
        cout << "1.  Easy!"<<endl;
        cout << "2.  Medium!"<<endl;
        cout << "3.  Difficult!"<<endl;
        cout << "0.  Quit game!\n" << endl;
 
        // selecting difficulty level 
        int levelChoice;
        cout << "Enter the number: ";
        cin >> levelChoice;
 
        
        srand(time(0));
        int randomNumber = 1 + (rand() % 50);
        int playerChoice;
 
        // Difficulty Level:Easy
        if (levelChoice == 1) {
            cout << "\n** You have 8 choices for finding the "
                    "secret number between 1 and 50. **";
            int leftchoices = 8;
            for (int i = 1; i <= 8; i++) {
 
                // guessing the secret number
                cout << "\n\nEnter the number: ";
                cin >> playerChoice;
                cout<<endl;
 
                // checking if the playerChoice is correct or not
                if (playerChoice == randomNumber) {
                    cout << "Well Played !! You won, "
                         << playerChoice
                         << " is the secret number" << endl;
                    cout << "\t\t\t ** Thanks for playing this game **"
                         << endl;
                    cout << " Play Again !!\n\n"
                         << endl;
                    break;
                }
                else {
                    cout << "OOPS !, " << playerChoice
                         << " is not the Correct Number\n"<<endl;;
                    if (playerChoice > randomNumber) {
                        cout << "The secret number is "
                                "smaller than the number "
                                " chosen"
                             << endl;
                    }
                    else {
                        cout << "The secret number is "
                                "greater than the number "
                                " chosen"
                             << endl;
                    }
                    leftchoices--;
                    cout << leftchoices << " choices left. "
                         << endl;
                    if (leftchoices == 0) {
                        cout<<endl;
                        cout << "/// Sorry ! You couldn't find the "
                                "secret number, it was "
                             << randomNumber
                             << ", You lose!! ///\n\n";
                        cout << "** Play the game again to "
                                "win!! **\n\n";
                    }
                }
            }
        }
 
        // Difficulty level : Medium
        else if (levelChoice == 2) {
            cout << "\n** You have 5 choices for finding the "
                    "secret number between 1 and 50. **";
            int leftchoices = 5;
            for (int i = 1; i <= 5; i++) {
 
                //   guess the number
                cout << "\n\nEnter the number: ";
                cin >> playerChoice;
                cout<<endl;

                // checking that playerchoice is correct or not
                if (playerChoice == randomNumber) {
                    cout << "Well played!! You won, "
                         << playerChoice
                         << " is the secret number" << endl;
                    cout << "\t\t\t ** Thanks for playing **"
                         << endl;
                    cout << "** Play Again **\n\n"
                         << endl;
                    break;
                }
                else {
                    cout << "OOPS!, " << playerChoice
                         << " is not the Correct Number\n"<<endl;;
                    if (playerChoice > randomNumber) {
                        cout << "The secret number is "
                                "smaller than the number "
                                "you have chosen"
                             << endl;
                    }
                    else {
                        cout << "The secret number is "
                                "greater than the number "
                                "you have chosen"
                             << endl;
                    }
                    leftchoices--;
                    cout << leftchoices << " choices left. "
                         << endl;
                    if (leftchoices == 0) {
                        cout<<endl;
                        cout << "/// Sorry ! You couldn't find the "
                                "secret number, it was "
                             << randomNumber
                             << ", You lose!! ///\n\n";
                        cout << "** Play the game again to "
                                "win!! **\n\n";
                    }
                }
            }
        }
        // Difficulty level : hard
        else if (levelChoice == 3) {
            cout << "\n ** You have 3 choices for finding the "
                    "secret number between 1 and 50. **";
            int leftchoices = 3;
            for (int i = 1; i <= 3; i++) {
 
                
                cout << "\n\nEnter the number: ";
                cin >> playerChoice;
                cout<<endl;
 
                // checking the playerChoice is correct or not
                if (playerChoice == randomNumber) {
                    cout << "Well played! You won, "
                         << playerChoice
                         << " is the secret number" << endl;
                    cout << "\t\t\t** Thanks for playing **"
                         << endl;
                    cout << "** Play Again **\n\n"
                         << endl;
                    break;
                }
                else {
                    cout << "OOPS !, " << playerChoice
                         << " is not the Correct Number\n"<<endl;
                    if (playerChoice > randomNumber) {
                        cout << "The secret number is "
                                "smaller than the number "
                                "you have chosen"
                             << endl;
                    }
                    else {
                        cout << "The secret number is "
                                "greater than the number "
                                "you have chosen"
                             << endl;
                    }
                    leftchoices--;
                    cout << leftchoices << " choices left. "
                         << endl;
                    if (leftchoices == 0) {
                        cout<<endl;
                        cout << " /// Sorry ! You couldn't find the "
                                "secret number, it was "
                             << randomNumber
                             << ", You lose!! ///\n\n";
                        cout << "** Play the game again to "
                                "win!! **\n\n";
                    }
                }
            }
        }
        // For Quiting the game
        else if (levelChoice == 0) {
            exit(0);
        }
        else {
            cout << "Wrong choice, Enter valid choice to "
                    "play the game! (0,1,2,3)"
                 << endl;
        }
    }
    return 0;
}