#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cout<<"Enter 3 Positive number: \n";
    cin>>a>>b>>c;
    // if(a>=b && a>=c) cout<<a<<" is the Greatest Number";
    // else if(b>=a && b>=c) cout<<b<<" is the Greatest Number";
    // else cout<<c<<" is the Greatest Number";

    if(a>=b){
        if(a>=c) cout<<a<<" is the Greatest Number";
        else cout<<c<<" is the Greatest Number";
    }
    else{
        if (b>=c) cout<<b<<" is the Greatest Number";
        else cout<<c<<" is the Greatest Number";
    }
}