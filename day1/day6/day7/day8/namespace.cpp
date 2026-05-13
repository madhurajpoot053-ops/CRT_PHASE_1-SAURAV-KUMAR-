#include<iostream>
using namespace std;
namespace Virat
{
    void show()
    {
        cout<<"he is a partof royal challengers bangalore team:"<<endl;
}
};
namespace Rohit
{
    void show()
    {
        cout<<"he is a partof Mumbai Indians team:"<<endl;

    }
};

int main() 
{
    Virat::show();
    Rohit::show();
    return 0;
}