#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cout<<"Enter the 3 sides of triangle: "<<endl;
    cin>>a>>b>>c;
    if((a+b)>c && (b+c)>a && (c+a)>b) cout<<"It is sides of Triangle";
    else cout<<"It is not sides of Triangle";
    
}