#include<iostream>
using namespace std;
int main(){
    //ascii value print karne ke liye type casting
    //matlab 1 type se dusre type mai
    char x = '|';   //har symbol ki kuch ascii value sir ne jo di vahi yad rakhna
    int ascii = (int)x; //explicit type casting - ye user kar raha
    cout<<ascii<<endl;



    char y = 'A';   
    ascii = y; //implicit type casting - ismai jabarjasti char ke variable ki value int ke variable mai dal rahe to comipler khud kar dera 
    cout<<ascii<<endl;


    //ab ulta karte
    int z = 64;
    cout<<(char)z<<endl;


    char ch1 = 'A'; //asal mai ascii value hi store
    char ch2 = 'a';
    cout<<ch1+ch2<<endl;
    cout<<ch1+4<<endl;
    cout<<'g'+4<<endl;
    cout<<char('g'+4)<<endl;
}