#include <iostream>
using namespace std;

void menu() {

//It is a menu that you can see at monitor of ATM
    cout << "1. Withdraw money" << endl;
    cout << "2. Add money" << endl;
    cout << "3. See a balance" << endl;
    cout << "4. Change pin of card" << endl;
    cout << "5. Cancel" << endl;
}


int main() {

    int balance = 3000000;   //You can change this balance
    int pin_code = 1234;   //You can change this code
    int entered_pin = 0;
    cout << "Please enter pin code of your card" << endl;
    cin >> entered_pin;   //In order to work with ATM, entered_pin must similar with pin_code

    do {

        menu();

        int choise = 0;
        cin >> choise;

//If user wants withdraw money from card
        if(choise == 1) {

            int money_to_with = 0;
            cout << "Enter amount of money to withdraw" << endl;
            cin >> money_to_with;
            cout << "You can get your money!" << endl;

            balance = balance - money_to_with;
            cout << "Your balance after transaction is: " << balance << " dollars" << endl;

            int choise_after_transactoin = 0;
            cout << "Will you do any transactions ?" << endl;
            cout << "1.Yes" << endl;
            cout << "2.No" << endl;
            cin >> choise_after_transactoin;

//            if(choise_after_transactoin == 1) {}
            if(choise_after_transactoin == 2) {
                cout << "You can get your card!" << endl;
                break;
            }


        }
//If user wants add money from card
        else if(choise == 2) {

            int money_to_add = 0;
            cout << "Put your money to ATM" << endl;
            cin >> money_to_add;
            cout << "Your money has transferred to your card" << endl;

            balance = balance + money_to_add;
            cout << "Your balance after transaction is: " << balance << " dollars" << endl;

            int choise_after_transactoin = 0;
            cout << "Will you do any transactions ?" << endl;
            cout << "1.Yes" << endl;
            cout << "2.No" << endl;
            cin >> choise_after_transactoin;

            if(choise_after_transactoin == 2) {
                cout << "You can get your card!" << endl;
                break;
            }


        }
//If user wants see a balance of this card
        else if(choise == 3) {
            cout << "Your current balance is: " << balance << " dollars" << endl;

            int choise_after_transactoin = 0;
            cout << "Will you do any transactions ?" << endl;
            cout << "1.Yes" << endl;
            cout << "2.No" << endl;
            cin >> choise_after_transactoin;

            if(choise_after_transactoin == 2) {
                cout << "You can get your card!" << endl;
                break;
            }

        }
//If user wants change pin code of this card
        else if(choise == 4) {

            int new_pin = 0;
            int new_pin_conformation = 0;

            cout << "Please enter a new pin code for your card!" << endl;
            cin >> new_pin;

            cout << "Please conform a new pin code!" << endl;
            cin >> new_pin_conformation;

            if(new_pin == pin_code)  {
                cout << "New pin code must not similar with old one!" << endl;
            }
            else if(new_pin == new_pin_conformation) {
                new_pin = pin_code;
                cout << "Your pin code changed successfully!" << endl;

                int choise_after_transactoin = 0;
                cout << "Will you do any transactions ?" << endl;
                cout << "1.Yes" << endl;
                cout << "2.No" << endl;
                cin >> choise_after_transactoin;

                if(choise_after_transactoin == 2) {
                    cout << "You can get your card!" << endl;
                    break;
                }

            }
            else{
                cout << "You did not confirm your new pin code!" << endl;
            }

        }
//If user wants take him/her card
        else {
            cout << "You can get your card!" << endl;
            break;
        }

    } while (pin_code == entered_pin);


    return 0;
}
