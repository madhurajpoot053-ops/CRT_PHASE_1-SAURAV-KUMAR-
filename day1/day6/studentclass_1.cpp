#include<iostream>
using namespace std;
class Student{
    private:
        int registrationnumber = 128;
    public:
        string name;
        int age;
        string grade;
        int rollnumber;
        

        void displayInfo() {
            
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Grade: " << grade << endl;
            cout << "Roll Number: " << rollnumber << endl;
    registrationnumber++;
        }
    };
        int main() {
            Student student1;
            student1.name = "Madhu Rajput";;
            student1.age = 20;
            student1.grade = "A";
            student1.rollnumber = 1957;
            
            student1.displayInfo();
        return 0;
}
