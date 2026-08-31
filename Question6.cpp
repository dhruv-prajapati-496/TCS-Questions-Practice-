//Check Palindrome Number
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter A Number: ";
    int n;
    cin>>n;
    int temp = n;
    int rev = 0;
    while(n!=0){
        rev = rev*10 + n%10;
        n/=10;
    }
    if(rev == temp){
        cout<<temp<<" is A Palindrome Number.";
    } else{
        cout<<temp<<" is not A Palindrome Number.";
    }
    return 0;

}
