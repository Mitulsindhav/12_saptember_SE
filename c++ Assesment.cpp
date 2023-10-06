#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

class RockPaperScissors {
public:
    RockPaperScissors(string playerName) {
        player_name = playerName;
        round_number = 1;
    }

    
    void displayMenu() {
        cout << "Rock Paper Scissors Game" << endl;
        cout << "------------------------" << endl;
        cout << "1. Rock" << endl;
        cout << "2. Paper" << endl;
        cout << "3. Scissors" << endl;
        cout << "Enter your choice: ";
    }

    
    int generateComputerChoice() {
        srand(time(0)); 
        return (rand() % 3) + 1;
    }

   
    void playRound() {
        cout << "This is Round " << round_number << endl;

        int playerChoice, computerChoice;

        do {
            displayMenu();
            cin >> playerChoice;

            if (playerChoice < 1 || playerChoice > 3) {
                cout << "Invalid choice. Please choose a valid option." << endl;
                continue;
            }

            computerChoice = generateComputerChoice();

            cout << "Computer's choice: ";
            switch (computerChoice) {
                case 1:
                    cout << "Rock" << endl;
                    break;
                case 2:
                    cout << "Paper" << endl;
                    break;
                case 3:
                    cout << "Scissors" << endl;
                    break;
            }

            cout << player_name << "'s choice: ";
            switch (playerChoice) {
                case 1:
                    cout << "Rock" << endl;
                    break;
                case 2:
                    cout << "Paper" << endl;
                    break;
                case 3:
                    cout << "Scissors" << endl;
                    break;
            }

            if (playerChoice == computerChoice) {
                cout << "It's a tie!" << endl;
            } else if ((playerChoice == 1 && computerChoice == 3) ||
                       (playerChoice == 2 && computerChoice == 1) ||
                       (playerChoice == 3 && computerChoice == 2)) {
                cout << player_name << " wins!" << endl;
            } else {
                cout << "Computer wins!" << endl;
            }

        } while (playerChoice < 1 || playerChoice > 3);

        round_number++;
    }

    void playRounds(int numRounds) {
        for (int i = 0; i < numRounds; i++) {
            playRound();
        }
    }

private:
    string player_name;
    int round_number;
};

int main() {
    string playerName;
    int numRounds;

   
    cout << "Enter your name: ";
    cin >> playerName;

  
    cout << "Enter the number of rounds to play: ";
    cin >> numRounds;

    RockPaperScissors game(playerName);
    game.playRounds(numRounds);

  
  cout << "Thanks for playing, " << playerName << endl;

    return 0;
}

