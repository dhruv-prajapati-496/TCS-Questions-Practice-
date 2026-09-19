// count words in a string
#include<iostream>
#include<string>
using namespace std;
int main(){
    cout<<"Enter A String: "<<endl;
    string st;
    getline(cin,st);
    int count = 0;
    for(int i =0 ; i<=st.size(); i++){
        char ch = st[i];
        if(ch == ' ' || ch == '\0')
        {
            count++;
        }
        
    }
    cout<<"The number of words in given string is: "<<count;
    return 0;
}