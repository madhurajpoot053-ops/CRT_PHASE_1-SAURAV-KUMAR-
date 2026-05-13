#include<iostream>
using namespace std;
class Employee
{
    public:
    static int reg_no;
    static void show()
    {
        cout<<"Employee registration number:"<<reg_no<<endl;
    }
};
    
int Employee::reg_no=1001;
int main(){
    Employee E1;
    Employee E2;
    Employee E3;
    Employee E4;
    Employee::show();
}