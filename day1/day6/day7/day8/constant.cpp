#include<iostream>
using namespace std;
class Car{
    private:
    int speed;
    public:
    Car(){ 
        speed = 120;
    }
    void shwspeed()const // constant member function
{
   // speed = 150;
    cout<<"Speed of the car is: "<<speed<<" km/h"<<endl;
}}