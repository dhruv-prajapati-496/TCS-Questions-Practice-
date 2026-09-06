#include<iostream>
using namespace std;
int main(){
    cout<<"Enter Year: "<<endl;
    int n;
    cin>>n;
    if(n%4==0 && n%100 != 0 || n%400 ==0){
        cout<<n<<" is a Leap Year.";
        return 0;
    } cout<<n<<" is not a Leap Year.";
    return 0;
}