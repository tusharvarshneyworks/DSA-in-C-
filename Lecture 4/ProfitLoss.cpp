#include<iostream>
using namespace std;
int main(){
    float cp, sp;
    cout<<"Enter the Cost Price: ";
    cin>>cp;
    cout<<"Enter the Selling Price: ";
    cin>>sp;
    if(sp>cp) cout<<"You make a Profit of "<<sp-cp;
    else if(sp==cp) cout<<"You make no Profit or no Loss";
    else cout<<"You make a Loss of "<<cp-sp;
    //ye jab tab multiple condition agar 1st true to age ke chalinge hi nahi jada efficient
    //ye tin if se bhi kar skte
}