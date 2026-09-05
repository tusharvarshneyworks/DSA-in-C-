#include <iostream>
using namespace std;
int main(){

    int num;
    cout << "Enter a Positive Integer: ";
    cin >> num;
    if (num % 2 == 0) cout << "Number is Even";
    else cout << "Number is Odd";
}