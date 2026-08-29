// Check Even or Odd
#include<iostream>
using namespace std;
void CheckEvenORODD(int n){
    if(n%2==0){
        cout<<n<<" is Even.";
        return;
    } cout<<n<<" is Odd.";

}
int main(){
    cout<<"Enter an Integer: ";
    int n; cin>>n;
    CheckEvenORODD(n);
    return 0;
}