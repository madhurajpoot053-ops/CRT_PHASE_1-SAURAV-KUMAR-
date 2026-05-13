#include<iostream>
using namespace std;
bool isPowerOfTwo(int n){
    if(n==0)return false;
    if(n ==1)return true;
    return(n%2==0) && isPowerOfTwo(n/2);
    
}

int main(){
    int n;
    cin>>n;
    if(isPowerOfTwo(n))
    cout<<n<<" is a power of two."<<endl;
    else
    cout<<n<<" is not a power of two."<<endl;
    return 0;
}
