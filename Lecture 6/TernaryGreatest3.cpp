#include<iostream>
using namespace std;
int main (){
    int a, b, c;
    cout<<"Enter 3 numbers:\n";
    cin>>a>>b>>c;
    (a>=b) ? ((a>=c) ? cout<<a<<" is the Greateat" : cout<<c<<" is the Greateat") : ((b>=c) ? cout<<b<<" is the Greateat" : cout<<c<<" is the Greateat");
}