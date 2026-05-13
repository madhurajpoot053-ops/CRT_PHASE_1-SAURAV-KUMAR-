#include<iostream>
using namespace std;
class Cricketers
{
    string name;
    int runs;

    public:
    //parameterized constructor

    Cricketers (const Cricketers &c)
{
    this->name  = c.name;
    this->runs  = c.runs;
    
}
void show(){
    cout<<"Name:" <<name<<endl;
    cout<<"Runs:"<<runs <<endl;
}
};
int main(){
    Cricketers c1("Virat",1200);
    c1.show();
    Cricketers c2c2(c1);  // Copy constructor called

    c2.show();
    