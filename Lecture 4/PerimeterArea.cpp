#include<iostream>
using namespace std;
int main(){
    float length, breadth, area, perimeter;
    cout<<"Enter Length: ";
    cin>>length;
    cout<<"Enter breadth: ";
    cin>>breadth;
    perimeter=2*(length+breadth);
    area=length*breadth;
    cout<<"Perimeter: "<<perimeter<<endl;
    cout<<"Area: "<<area<<endl;
    if(area>perimeter) cout<<"Area of Rectangle is greater than its Perimeter";
    else if(area==perimeter) cout<<"Area of Rectangle is equal to its Perimeter";
    else cout<<"Area of Rectangle is smaller than its Perimeter";
}