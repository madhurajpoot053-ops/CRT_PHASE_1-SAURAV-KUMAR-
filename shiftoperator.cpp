#include<iostream>
using namespace std;
int main()

{
    int a,b;
    cout<<"enter a num"<<endl;
    cin>>a;
    cout << "Enter value for b: ";
    cin >> b;


    a = a << 2;
    b= b>>2;
    cout << "The value of a after multiplying by 4 is: " << a << endl;
    cout << "The value of b after dividing by 4 is: " << b << endl;
 
    return 0;
}
