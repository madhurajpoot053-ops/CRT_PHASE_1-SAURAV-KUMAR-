#include<iostream>
using namespace std;
class Atm{
private:
int balance;
    public:
    Atm(int balnce){
        this->balance=balance;
    }
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
     
    void showbalance(){
        cout<<"Current balance: "<<balance<<endl;
    }
};
int main(){
    Atm a(5000);
    a.showbalance();
    a.withdraw(1000);
    a.showbalance();
    return 0;
}
