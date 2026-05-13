#include<iostream>
using namespace std;
class Area{
private:
    int length;
    int width;
    public:
    void setsides(int l, int w){
        length = l;
        width = w;
    }
    friend void showArea(Area a);
    };
    void showArea(Area b){
        int area = b.length *b.width;
        cout<<"Area of rectangle is: "<<area<<endl;
    }
    int main(){
        Area a;
        a.setsides(5, 3);
        showArea(a);
        return 0;

}