#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a Positve Integer: ";
    cin>>num;
    if(num>=1000 && num<=9999) cout<<"It is a 4 digit number";    //and mai short circuiting peheli galat to dusri check hi nahi
    else cout<<"It is not a 4 digit number";
}