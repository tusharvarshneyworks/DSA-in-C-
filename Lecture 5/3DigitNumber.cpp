#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a Positive Integer: ";
    cin>>num;
    if(num>=100){
        if(num<=999) cout<<"3 Digit number";
        else cout<<"not a 3 Digit number";
    }
    else cout<<"not a 3 Digit number";
}