#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int age;
    int rollno;
    
//  Default constructor
Student(){
    name= "Madhu";
    rollno = 11;
}
//print
void show(){
   cout<<"Name:"<< name <<endl;
   cout<<"Age:"<< age <<endl;
   cout<<"Default constuctor"<<name <<endl;
}
};
int main(){
    Student s1;
    s1.show();
    return 0;
}