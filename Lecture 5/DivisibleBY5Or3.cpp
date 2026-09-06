#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the Positive Integer: ";
    cin>>num;
    if(num%5==0 || num%3==0) cout<<"It is Divisible by 5 or 3";     // or mai bhi short circuiting bhi ismai pehela true to aage check hi nahi
    else cout<<"It is not Divisible by 5 or 3";
    //you can use "and" and "or" instead of && and ||
}