#include<iostream>
using namespace std;
int main(){
    int x = 10;
    cout << x << endl;
    x = 9; // now x is no more 10. it is 9
    cout << x << endl;
    // int x = 9;  // redeclaration ka error aa jayega

    x = x + 7;
    cout << x << endl;

    x = x - 20;
    cout << x << endl;
}