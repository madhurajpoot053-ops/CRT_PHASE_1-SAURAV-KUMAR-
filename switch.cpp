#include<iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    cout<<"enter two numbers:";
    cin>>a>>b;
    cout<<"enter an operator (+,-,*,/): ";
    cin>>op;
    switch(op){
        case '+':
            cout<<"result: "<<a+b<<endl;
            break;
        case '-':
            cout<<"result: "<<a-b<<endl;
            break;
        case '*':
            cout<<"result: "<<a*b<<endl;
            break;
        case '/':
            if(b!=0){
                cout<<"result: "<<a/b<<endl;
            }else{
                cout<<"error: division by zero"<<endl;
            }
            break;
        default:
            cout<<"invalid operator"<<endl;
    }
return 0 ;
}