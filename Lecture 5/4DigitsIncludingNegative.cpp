#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a Integer: ";
    cin>>num;
    if((num>=1000 && num<=9999)||(num<=-1000 && num>=-9999)) cout<<"It is a 4 digit Integer";    
    else cout<<"It is not a 4 digit Integer";
}