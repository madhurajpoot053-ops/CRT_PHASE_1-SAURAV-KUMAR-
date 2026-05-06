#include<iostream>
using namespace std;

int area(int length, int breadth) {
    return length * breadth;
}

int main() {
    int l, b;
    cout << "Enter length and breadth: ";
    cin >> l >> b;

    cout << "Area = " << area(l, b);

    return 0;
}