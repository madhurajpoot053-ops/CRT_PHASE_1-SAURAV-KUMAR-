#include<iostream>
using namespace std;
class Area{
    public:
    double length;
    double breadth;
    Area(){
        length =0;
        breadth = 0;

    }

    Area(double length, double w){
        this->length =  length;
        breadth = w;

    }
    // Parameterized  constructor
    Area(double length, double breadth, int side, float radius)
{
    length = a;
    breadth = b;
    side = c;
    radius = d;

  //member functions
    void show(){
        cout<<"Name:"<< name <<endl;
        cout<<"Runs:"<< runs <<endl;
        cout<<"Average:"<< avg <<endl;
        
}
};
Cricketers c1 ("sachin",100,48.9);
c1.show();

return 0;
}