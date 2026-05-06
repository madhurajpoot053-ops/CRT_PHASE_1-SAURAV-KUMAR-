#include<iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter age: ";
    cin >> age;

    if(age < 0)
        cout << "Invalid age";
    else if(age >= 100)
        cout << "Century category - Eligible to vote";
    else if(age >= 18)
        cout << "Eligible to vote";
    else
        cout << "Not eligible to vote";

    return 0;
}