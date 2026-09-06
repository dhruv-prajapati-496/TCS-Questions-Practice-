// Vowels and consonents in a String
#include<iostream>
#include<string>
using namespace std;
int main(){
string s;
cout<<"Enter a String: ";
cin>>s;
for (auto& x : s) {
        x = tolower(x);
    }
int vowels = 0, consonents = 0;
for( char c : s){
    if( c == 'a' || c == 'e' || c == 'i' || c=='o' || c=='u'){
        vowels++;
    } else {
        consonents++;
    }
}
cout<<"vowels : "<<vowels<<endl;
cout<<"consonents : "<<consonents;
return 0;
}
