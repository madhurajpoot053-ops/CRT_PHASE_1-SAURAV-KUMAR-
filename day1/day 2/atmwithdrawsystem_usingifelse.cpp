#include<iostream>
using namespace std;

int main() {
    int balance = 10000, amount;
    cout << "Enter withdraw amount: ";
    cin >> amount;

    if(amount <= balance && amount > 0)
        cout << "Transaction Successful";
    else
        cout << "Transaction Failed";

    return 0;
}