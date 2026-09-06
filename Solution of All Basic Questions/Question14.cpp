// Reverse of a string
#include<iostream>
#include<string>
using namespace std;
int main(){
    cout<<"Enter a String: ";
    string str;
    cin>>str;
    string rev = "";
    for(int i = str.length()-1; i>=0; i--){
        rev += str.at(i);
    }
    cout<<"The Reverse of "<<str<<" is : "<<rev;
    return 0;
}