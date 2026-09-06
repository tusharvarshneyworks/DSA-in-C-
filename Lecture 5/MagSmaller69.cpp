#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the integer: ";
    cin>>num;
    if(num<69 && num>-69) cout<<"Magnitude of "<<num<<" is Smaller than 69";
    else cout<<"Magnitude of "<<num<<" is not Smaller than 69";
}