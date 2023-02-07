// Program to find cash needed in notes.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the amount"<<endl;
    cin>>n;
    int rs2000,rs500,rs100,rs50,rs20,rs10;
    switch(1)
    {
    case 1:
        rs2000=n/2000;
        n%=2000;
    case 2:
        rs500=n/500;
        n%=500;
    case 3:
        rs100=n/100;
        n%=100;
    case 4:
        rs50=n/50;
        n%=50;
    case 5:
        rs20=n/20;
        n%=20;
    case 6:
        rs10=n/10;
        n%=10;
        break;
    
    default:
        cout<<"ENter amount only nothing else!!!"<<endl;
        break;
    }
    cout<<"Number of 2000 RUPEES NOTE:"<<rs2000 <<endl;
    cout<<"Number of 500 RUPEES NOTE:"<<rs500 <<endl;
    cout<<"Number of 100 RUPEES NOTE:"<<rs100 <<endl;
    cout<<"Number of 50 RUPEES NOTE:"<<rs50 <<endl;
    cout<<"Number of 20 RUPEES NOTE:"<<rs20 <<endl;
    cout<<"Number of 10 RUPEES NOTE:"<<rs10 <<endl;

    return 0;
}