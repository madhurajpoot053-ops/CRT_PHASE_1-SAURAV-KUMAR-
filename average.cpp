#include<iostream>
using namespace std;
int main(){
    float a,b,c;
    cout<<"enter three numbers:";
    cin>>a>>b>>c;
    float sum = a+b+c;
    float average = sum/3.0;
    cout<<"The average is:"<<average<<"and "<<sum;
}