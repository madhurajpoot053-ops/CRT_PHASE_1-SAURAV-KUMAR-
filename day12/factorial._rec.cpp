#include<iostream>
using namespace std;
int sumdigits(int n,int i){
    if(i==0)
    return ;
    return (n%10)+sumdigits(n);
    
    }
    int main(){
        int n;
        cin>>n;
        cout<<"fib of"<<n <<"is:"<<sum(n)<<endl;
    }





































































