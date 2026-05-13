#include<iostream>
using namespace std;
class Player{
    public:

    string name;
    int age;
     void setName(string n){
        name = n;

     }
};
//derived class  or child class
class Cricketer: public Player 
{
    public:
    int runs;
    void setruns(int r){
        runs = r;
    }
    void show(){
    cout<< "Name:"<<name<<endl;
    cout<<"Runs:"<<runs<<endl;}
};

int main(){
    int r;
    cin>>r;
    Cricketer c1;
    c1.setName("Sachin");
    c1.setruns(100);
    c1.show();
    return 0;

}