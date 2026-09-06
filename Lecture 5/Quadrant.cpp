#include<iostream>
using namespace std;
int main(){
    float x, y;
    cout<<"Enter x and y coordinates of a Point: \n";
    cin>>x>>y;
    if(x>0 && y>0) 
        cout<<"Point in 1st Quadrant";
    else if(x<0 && y>0) 
        cout<<"Point in 2nd Quadrant";
    else if(x<0 && y<0)
        cout<<"Point in 3rd Quadrant";
    else if(x>0 && y<0)
         cout<<"Point in 4th Quadrant";
    else
         cout<<"Point at the origin";
}