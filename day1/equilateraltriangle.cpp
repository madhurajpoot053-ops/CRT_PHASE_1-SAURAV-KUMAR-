#include<iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three sides: ";
    cin >> a >> b >> c;

    // Check all sides equal
    bool isEqual = (a == b) && (b == c);

    cout << isEqual;  // prints 1 (true) or 0 (false)

    return 0;
}