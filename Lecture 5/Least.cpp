#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cout<<"Enter 3 Positive number: \n";
    cin>>a>>b>>c;
    if(a<=b && a<=c) cout<<a<<" is the Smallest Number";
    else if(b<=a && b<=c) cout<<b<<" is the smallest Number";
    else cout<<c<<" is the Smallest Number";
}