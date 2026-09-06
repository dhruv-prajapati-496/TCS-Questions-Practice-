// Find a Number is prime or not
#include<iostream>
#include<cmath>
using namespace std;
bool PrimeNumber(int n){
    if(n<=1){
        return false;
    }
    for(int i = 2;i<=sqrt(n); i++){
        if(n%i==0){
            return false;
        }

    }
    return true;
}
int main(){
    int n;
    cout<<"Enter an Integer: "<<endl;
    cin>>n;
    cout<<(PrimeNumber(n) ? "Prime":"Not Prime");
    return 0;
    
}