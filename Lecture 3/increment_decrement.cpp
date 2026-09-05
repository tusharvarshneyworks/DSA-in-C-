#include<iostream>
using namespace std;
int main(){
    // x++(post) ++x(pre) x--(post) --x(pre)
    int x = 10;
    cout<<x<<endl;
    x++;  // x = x + 1   
    cout<<x<<endl;   
    ++x;  // x = x + 1   
    cout<<x<<endl;   
    x--;  // x = x - 1   
    cout<<x<<endl;   
    --x;  // x = x - 1   
    cout<<x<<endl;   
}