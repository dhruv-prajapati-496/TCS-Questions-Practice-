//count number of digits
#include<iostream>
using namespace std;
int main(){
    long long n; cout<<"Enter A Number: ";
    cin>>n; int count = 0;
    while(n!=0){
        n/=10;
        count++;
    }
    cout<<"This number has "<<count<<" digits";
    return 0;
}