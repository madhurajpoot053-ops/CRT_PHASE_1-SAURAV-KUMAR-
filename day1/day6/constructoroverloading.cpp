#include<iostream>
using namespace std;
class Cricketers{
    public:
    string name;
    int runs;
    double avg;
    // Parameterized  constructor
    Cricketers(string n, int r, double avg)
{
    name = n;
    runs = r;
    this->avg = avg; 
}


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