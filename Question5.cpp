// Reverse A Number
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter A Number: "<<endl;
    int n;
    cin>>n;
    int rev = 0;
    while(n!=0){
        rev = rev*10 + n%10;
        n/=10;
    }
    cout<<"The Reverse Number is: "<<rev;
    return 0;

}