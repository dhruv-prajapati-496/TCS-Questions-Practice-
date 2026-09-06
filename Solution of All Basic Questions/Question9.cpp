// Maximum of three numbers
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter three Numbers: "<<endl;
    cin>>a>>b>>c;
    cout<<max({a,b,c})<<" is the Maximum.";
    return 0;
}