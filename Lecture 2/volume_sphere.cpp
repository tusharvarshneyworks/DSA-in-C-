#include<iostream>
using namespace std;
int main (){
    float radius;
    cout<<"Enter radius: ";
    cin>>radius;
    float volume = (4/3)*3.1416*radius*radius*radius;
    cout<<"Volume of Sphere is "<<volume;
}