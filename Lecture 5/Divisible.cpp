#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the Positive Integer: ";
    cin>>num;
    //order ke hisab se kam lo
    // if(num%5==0 && num%3==0) cout<<"Anuj";
    // else if(num%5==0) cout<<"Kartikey";     
    // else if(num%3==0) cout<<"Sakshi";     
    // else cout<<"Hitesh";     
    
    if(num%5==0 && num%3==0){ 
        cout<<"Anuj";
    }
    if(num%5==0 && num%3!=0){ 
        cout<<"Kartikey";
    }    //jab multiple line likhni ho
    if(num%5!=0 && num%3==0) cout<<"Sakshi";
    if(num%5!=0 && num%3!=0) cout<<"Hitesh";
}