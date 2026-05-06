#include<iostream>
using namespace std;

void applydisc(double &bill) {
    bill = bill - (bill * 0.10);
}

int main() {
    double bill = 250.50;

    cout << "Original bill: " << bill << endl;

    applydisc(bill);

    cout << "After discount: " << bill << endl;

    return 0;
}