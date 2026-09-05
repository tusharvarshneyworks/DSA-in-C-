#include <iostream>
using namespace std;
int main(){
    cout<<(5>3)<<endl;    //true
    cout<<(5<3)<<endl;    //false
    cout<<(4==8)<<endl;    //false
    cout<<(8==8)<<endl;    //true

    int x=3,y=9;
    cout<<(x>=y)<<endl;
    cout<<(x>y)<<endl;
    cout<<(x<=y)<<endl;
    cout<<(x<y)<<endl;
    cout<<(x==y)<<endl;
    cout<<(x!=y)<<endl;

    bool a = (x!=y);
    cout<<a<<endl;
}