#include <iostream>
using namespace std;

class Account {
private:
    int acc_number;

protected:
    double balance;

public:
    string name;

    void setAccount(int accNum, double bal, string accName) {
        acc_number = accNum;
        balance = bal;
        name = accName;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: $" << amount << endl;
        } else {
            cout << "Insufficient balance or invalid amount!" << endl;
        }
    }

    void displayDetails() {
        cout << "\nAccount Holder: " << name << endl;
        cout << "Balance: $" << balance << endl;
        cout << "Account Number: "<<acc_number << endl;
    }
};

int main() {
    Account myAccount;
    myAccount.setAccount(123456789, 5000.0, "Ankit Choudhary");

    myAccount.deposit(2000);
    myAccount.withdraw(1500);
    myAccount.displayDetails();

    return 0;
}
