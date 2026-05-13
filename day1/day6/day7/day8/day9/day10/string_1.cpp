#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
//#include<bits/stdc++.h>
int main(){
    string str1 =" hello";
    string str2= "jecrc";
    cout<<str1<<" "<<str2<<endl;
    //methods of string 
    //1 length  of string 
    int n = str1.length();
    cout<<"length of string is "<<n<<endl;
    //2 append string
    cout<<"after appending string is "<<str1.append("Students")<<endl;
    //empty string //0 false 1 true
    cout<<"is string empty "<<str2.empty()<<endl;
    //concatinaton of string
    cout<<"after concatination of string is "<<str1+" "+"bachho"<<endl;
    cout<<"after concatination of string is "<<str1<<endl;
    //push_back()method
    str2.push_back('U');
    cout<<"after push back method string is "<<str2<<endl;
    //pop_back()method
    str2.pop_back();
    cout<<"after pop back method string is "<<str2<<endl;
    //at method
    char ch = str1.at(1);
    cout<<"character at index 1 is "<<ch<<endl;
    //find ()method
    int index = str1.find("ello");
    cout<<"index of 'ello' in str1:"<<index<<endl;
    //swap mathod
    str1.swap(str2);
    cout<<"after swap method str1 and str2: "<<endl;
    cout<<"after swap method str1 is "<<str1<<endl;
    cout<<"after swap method str2 is "<<str2<<endl;

    //substr()method
    string substr = str1.substr(5, 6);//5 is index and 6 is length of substring
    cout<<"substring of str1 from index 5 with length 6 is "<<substr<<endl;
  //get line()
string str3;
//cin>>str3;
getline(cin, str3);
cout<<"you entered:"<<endl;
return 0 ;
}