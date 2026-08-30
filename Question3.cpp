// Factorial of a Number
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    long fact = 1;
    for(int i = 1; i<=n ; i++){
        fact *=i;
    }
    cout<<"Factorial of "<<n<<" is : "<<fact;
    return 0;
}