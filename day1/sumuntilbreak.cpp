#include<iostream>
using namespace std;

int main() {
    int num, sum = 0;

    while(true) {
        cout << "Enter number: ";
        cin >> num;

        if(num < 0)
            break;

        sum += num;
    }

    cout << "Final Sum = " << sum;

    return 0;
}