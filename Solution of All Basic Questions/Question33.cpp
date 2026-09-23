// Rotate Array Right by 1 Position
#include<iostream>
#include<vector>
using namespace std;
int main(){
    cout<<"Enter Array Size: ";
    int n; cin>>n;
    vector<int> arr(n,0);
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int last = arr[n-1];
    for(int i = n-1; i>0; i--){
        arr[i] = arr[i-1];
    }
    arr[0] = last;
    cout<<"The Right Shifted Array is: "<<endl;
    for(int i : arr){
        cout<<i<<" ";
    }
    return 0;
}