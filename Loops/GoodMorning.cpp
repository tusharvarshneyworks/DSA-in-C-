#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"Tushar"<<endl;
    }


    for(int i=1;i<=3;i++){      // agar mai i++ ko kisi cout ya if mai naa likho matlab i+1 shide(kyuki i++ shide use nahi ho raha) loop chalta u shape mai i++ ke jagha i=i+1 / ++i / i+=1 se sab also chalega yaha par kam same
        cout<<"Hello"<<endl;    //body of the loop the thing which we want to repeat
    }
}