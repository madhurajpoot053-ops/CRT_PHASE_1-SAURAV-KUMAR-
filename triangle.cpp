#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the sides of the triangle:"<<a<<" " <<b<<" "<<c;
    cin>>a>>b>>c;
    if(a==b && b==c)
    {
        cout<<"the triangle is equilateral";

    }
    else
    {
        cout<<"the triangle is not equilateral";
}
return 0;
}
