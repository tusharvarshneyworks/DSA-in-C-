#include<iostream>
using namespace std;
int main() {
    int a=7;
    int b=4;
    a=b;
    //b ki value a mai aa gai
    cout<<a<<endl;
    cout<<b<<endl;

    // int x =10;
    // x=x+7;
    // cout<<x<<endl;
    // x=x-3;
    // cout<<x<<endl;
    // x=x/2;      //division
    // cout<<x<<endl;

    //ye same hai-short hand notation
    int x =10;
    x+=7;
    cout<<x<<endl;
    x-=3;
    cout<<x<<endl;
    x/=2;      //division
    cout<<x<<endl;
}