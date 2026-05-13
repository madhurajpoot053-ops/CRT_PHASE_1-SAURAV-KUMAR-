#include<iostream>
using namespace std;
class Atm{
private:
int balance;
    public:
    //encapsulation
    void setBalance(int balance){
        this->balance = balance;
    }
    //withdraw method of atm
    void withdraw(int amount){
        if(amount>balance)
        {
            cout<<"Insufficient balance"<<endl;
        }
        else
        {
            balance-=amount;
            cout<<"Withdrawal successful. Remaining balance: "<<balance<<endl;
        }
    }
     //show balance method of atm
     int getBalance(){
        return balance;
     }
    };
   
int main(){
    int n;
    cin>>n;
    Atm a;
    a.setBalance(n);
    cout<<"balance is:"<<a.getBalance()<<endl;
    a.withdraw(1000);
    cout<<"balance is:"<<a.getBalance()<<endl;
    
    return 0;
}
