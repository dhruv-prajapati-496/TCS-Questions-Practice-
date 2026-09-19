// Remove Spaces from string
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter a String: ";
    getline(cin,str);
    for(int i = 0; i <= str.size() - 1; i++){
        char ch = str[i];
        if( ch == ' '){
            str.erase(i,1);  // to erase the space from the string
            i--;             // to adjust the index after erasing
        }
    }
    cout<<"The String Without Spaces is : "<<endl;
    cout<<str;
    return 0;

}