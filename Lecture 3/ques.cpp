#include<iostream>
using namespace std;
int main(){
    int x = 8;
    int y = x++ + --x;  //left to right chalte ham
    cout<<y<<endl;  
    cout<<x<<endl;  
}