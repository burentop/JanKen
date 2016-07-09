//
//  main.cpp
//  JanKen
//
//  Created by Brent Perry on 7/9/16.
//  Copyright © 2016 Brent Perry. All rights reserved.
//

#include "../../../std_lib_facilities.h"

int main()
{
    string user_choice = " ";
    string item_to_enter;
    int user_wins = 0;
    int comp_wins = 0;
    vector<char> computer_plays;
    
    cout << "Please enter either 'rock', 'paper' or 'scissors', followed by <enter>.\n";
    cout << "Please enter at least 4 items (more is better). Enter 'q' to begin playing.\n";
    
    while (!cin.fail()) {
        cout << "Enter an item: ";
        cin >> item_to_enter;
        if (item_to_enter == "q") {
            break;
        }
        if (item_to_enter == "rock") {
            computer_plays.push_back('r');
        } else if (item_to_enter == "paper") {
            computer_plays.push_back('p');
        } else if (item_to_enter == "scissors") {
            computer_plays.push_back('s');
        } else {
            cout << "Invalid entry! 'rock', 'paper' or 'scissors' please!!\n";
        }
        cout << "\n";
    }
    
    cout << "\n";
    cout << "Let's play!\n";
    cout << "\n";
    
    for (int i = 0; i < computer_plays.size(); ++i) {
        cout << "Enter your choice, either 'rock', 'paper' or 'scissors': ";
        cin >> user_choice;
        if (user_choice == "rock") {
            switch (computer_plays[i]) {
                case 'r':
                    cout << "Computer also played 'rock'. It's a draw.\n";
                    cout << "\n";
                    break;
                case 'p':
                    cout << "Computer played 'paper'; it wins a point.\n";
                    cout << "\n";
                    ++comp_wins;
                    break;
                default:
                    cout << "Computer played 'scissors'; you win a point.\n";
                    cout << "\n";
                    ++user_wins;
                    break;
            }
        } else if (user_choice == "paper") {
            switch (computer_plays[i]) {
                case 'r':
                    cout << "Computer played 'rock'; you win a point.\n";
                    cout << "\n";
                    ++user_wins;
                    break;
                case 'p':
                    cout << "Computer also played 'paper'. It's a draw.\n";
                    cout << "\n";
                    break;
                default:
                    cout << "Computer played 'scissors'; it wins a point.\n";
                    cout << "\n";
                    ++comp_wins;
                    break;
            }
        } else if (user_choice == "scissors") {
            switch (computer_plays[i]) {
                case 'r':
                    cout << "Computer played 'rock'; it wins a point.\n";
                    cout << "\n";
                    ++comp_wins;
                    break;
                case 'p':
                    cout << "Computer played 'paper'; you win a point.\n";
                    cout << "\n";
                    ++user_wins;
                    break;
                default:
                    cout << "Computer also played 'scissors'. It's a draw.\n";
                    cout << "\n";
                    break;
            }
        } else {
            cout << "You entered an invalid choice. Computer gets a point!\n";
            cout << "\n";
            ++comp_wins;
        }
        
    }
    
    if (user_wins > comp_wins) {
        cout << "You won the tournament!! You had " << user_wins << " wins, and the computer had " << comp_wins << ".\n";
    } else if (comp_wins > user_wins) {
        cout << "The computer beat you! It had " << comp_wins << " wins, and you had " << user_wins << ".\n";
    } else {
        cout << "It was a tie. You and the computer both had " << user_wins << " wins.\n";
    }
    
    
}
