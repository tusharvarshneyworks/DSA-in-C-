#include <iostream>
using namespace std;
int main(){
    float n;
    cout<<"Enter a Real Number: ";
    cin>>n;
    int a = (int)n;     //decimal bhag jayega
    if(n==(float)a) cout<<n<<" is an Integer";     //if mai jo compare karo deko ki dono ka datatype same thik raheta ha
    //if(n==a)  ye bhi chal jayega
    else cout<<n<<" is not an Integer";
}