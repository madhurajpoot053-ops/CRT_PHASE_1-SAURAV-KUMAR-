#include<iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    int sum = a + b + c;
    float avg = sum / 3.0;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << avg;

    return 0;
}