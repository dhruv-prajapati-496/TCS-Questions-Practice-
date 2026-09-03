//LCM of two numbers
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter Two Numbers: ";
    cin>>a>>b;
    int x = a,y = b;
    while(b!=0){
        int temp = b;
        b = a%b;
        a = temp;
    }
    int gcd = a;
    cout<<"LCM = "<<(x*y)/gcd;
    return 0;
}