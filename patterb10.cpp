#include<iostream>
using namespace std;
int main() {
    int n = 5;
  
    for(int row =1; row <=n; row++){
        char ch ='A';
       for(int col = 1; col <= 3; col++){
          cout << ch <<" ";
          char ch = 'A'+ row ;
       }    
       
    cout<< endl;
  }
return 0;
}