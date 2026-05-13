#include<iostream>
using namespace std;
int fac(int x)
{
    //base case
    if(x==1)
    return 1;
   return x*fac(x-1);
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
   cout<<"factorial is:"<<n<<"is"<<fac(n)<<endl;
}