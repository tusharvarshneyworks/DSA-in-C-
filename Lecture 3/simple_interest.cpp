#include<iostream>
using namespace std;
int main(){
    float p, r, t;
    cout<<"Enter principal: ";
    cin>>p;
    cout <<"Enter rate: ";
    cin>>r;
    cout<<"Enter time: ";
    cin>>t;
    float SI = (p*r*t)/100;
    cout<<"Simple interest is "<<SI;
}