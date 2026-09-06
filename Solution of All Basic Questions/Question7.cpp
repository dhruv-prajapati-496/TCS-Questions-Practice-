// Armstrong Number Problem
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    cout<<"Enter a Number: ";
    int n;
    cin>>n;
    
    int temp1 = n,sum = 0,count = 0,temp2 = n;
    if(n==0){
        count = 1;
    }
    while(n!=0){
        count++;
        n/=10;
    }
    while(temp1!=0){
        sum += pow(temp1%10,count);
        temp1/=10;
    }
    if(sum==temp2){
        cout<<temp2<<" is an Armstrong Number";
    } else{
        cout<<temp2<<" is not an Armstrong Number";
    }
    return 0;
    
}