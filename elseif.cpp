#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if(age>100){
        cout<<"your age is too much"<<endl;
    }
    else if(age>=18 || age<99){
        cout<<"you are  eligible for vote"<<endl;
    }
    else if(age<18){
        cout<<"you are not eligible for vote"<<endl;
    }
    else{
        cout<<"your age is negative"<<endl;
    }

    return 0;
}