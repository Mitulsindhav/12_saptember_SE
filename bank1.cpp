#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
     string depositorName;
    long long accountNumber;
      string accountType;
    double balance;

public:
   
    void assignValues(const string& name, long long accNumber, const string& accType, double initialBalance) {
        depositorName = name;
        accountNumber = accNumber;
        accountType = accType;
        balance = initialBalance;
    }

    
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited $" << amount << " into the account." <<endl;
        } else {
            cout << "Invalid deposit amount." <<endl;
        }
    }

    
    void withdraw(double amount) {
        if (amount > 0 && balance >= amount) {
            balance -= amount;
            cout << "Withdrawn $" << amount << " from the account." <<endl;
        } else {
            cout << "Invalid withdrawal amount or insufficient balance." <<endl;
        }
    }

    
    void display() {
        cout << "Account Holder: " << depositorName <<endl;
        cout << "Account Number: " << accountNumber <<endl;
        cout << "Account Type: " << accountType <<endl;
        cout << "Balance: $" << balance <<endl;
    }
};

int main() {
    BankAccount myAccount;
    myAccount.assignValues("Mitulsinh", 123456789, "Savings", 60000.0);

    myAccount.display();

    myAccount.deposit(500.0);
    myAccount.display();

    myAccount.withdraw(200.0);
    myAccount.display();
    
    myAccount.withdraw(1500.0); 
    myAccount.display();

    return 0;
}

