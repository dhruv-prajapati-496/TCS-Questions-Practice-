// Remove Duplicates from Array
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1,result = "";
    cout<<"Enter the String: ";
    getline(cin, s1);
    for( char ch : s1){
        if(result.find(ch) == string::npos){
            result += ch;
        }
        
    }
    cout<<"Duplicates are removed: "<<result;
    return 0;
}
// string::npos returns true if c++ fails to find the character