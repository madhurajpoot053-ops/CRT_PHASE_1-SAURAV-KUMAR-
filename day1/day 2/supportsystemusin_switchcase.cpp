#include<iostream>
using namespace std;

int main() {
    int choice;
    cout << "1.Normal\n2.Billing\n3.Technical\n4.Speak to agent\nEnter choice: ";
    cin >> choice;

    switch(choice) {
        case 1: cout << "Normal Support"; break;
        case 2: cout << "Billing Support"; break;
        case 3: cout << "Technical Support"; break;
        case 4: cout << "Connecting to Agent"; break;
        default: cout << "Invalid Option";
    }

    return 0;
}