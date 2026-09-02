// GCD of two numbers
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter Two Numbers: ";
    cin>>a>>b;
    while(b!=0){
        int temp = b;
        b = a%b;
        a = temp;
    }
    cout<<a;
    return 0;
}