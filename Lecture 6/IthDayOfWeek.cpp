#include<iostream>
using namespace std;
int main(){
   int n;
    cout<<"Enter a Number:";
    cin>>n;

    // if(n==1) cout<<"Monday";
    // else if(n==2) cout<<"Tuesday";
    // else if(n==3) cout<<"Wednesday";
    // else if(n==4) cout<<"Thrusday";
    // else if(n==5) cout<<"Friday";
    // else if(n==6) cout<<"Saturday";
    // else if(n==7) cout<<"Sunday";
    // else cout<<"Invalid day";

    // switch(n){
    //     case 1:
    //     cout<<"Monday";
    //     case 2:
    //     cout<<"Tuesday";
    //     case 3:
    //     cout<<"Wednesday";
    //     case 4:
    //     cout<<"Thrusday";
    //     case 5:
    //     cout<<"Friday";
    //     case 6:
    //     cout<<"Saturday";
    //     case 7:
    //     cout<<"Sunday";
    //     default:
    //     cout<<"Invalid Day";
    // }

    switch(n){      //iske andar character bhi rakh skte cases ko suffle karskte
        case 1: cout<<"Monday"; break;
        case 2: cout<<"Tuesday"; break;
        case 3: cout<<"Wednesday"; break;
        case 4: cout<<"Thrusday"; break;
        case 5: cout<<"Friday"; break;
        case 6: cout<<"Saturday"; break;
        case 7: cout<<"Sunday"; break;
        default: cout<<"Invalid Day";
        //code ko chota karne keliye aise likh skte hai
    }
}