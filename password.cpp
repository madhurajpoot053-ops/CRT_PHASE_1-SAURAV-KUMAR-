#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if(age<16|| age >65){
        cout<<"you are eligible for discount"<<endl;
    }
    else{
        cout<<"you are not eligible for discount"<<endl;
    }
    return 0;
}