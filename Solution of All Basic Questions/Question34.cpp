// Check Palindrome String
#include<iostream>
#include<string>
using namespace std;
int main(){
    cout<<"Enter A String: "<<endl;
    string str; cin>>str;
    string rev = "";
    for(int i = str.length()-1; i>=0; i--){
        rev += str[i];
    }
    cout<<(rev==str ? "It is a Palindrome String" : "It is not a Palindrome String");
    return 0;
}