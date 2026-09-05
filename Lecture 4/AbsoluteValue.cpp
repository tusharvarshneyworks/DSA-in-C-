#include <iostream>
using namespace std;
int main(){
    //absolute value matlab mod
    int num;
    cout<<"Enter a Number: ";
    cin>>num;
    // if(num<0) cout<<"Absolute Value: "<<-num;
    // else cout<<"Absolute Value: "<<num;

    if(num<0) num *=-1;
    cout<<"Absolute Value: "<<num;

}