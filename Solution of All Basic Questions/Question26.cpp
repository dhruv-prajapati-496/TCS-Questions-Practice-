// check if array is sorted 
#include<iostream>
#include<vector>
using namespace std;
int main(){
    cout<<"Enter Array Size: ";
    int n; cin>>n;
    vector<int> arr(n,0);
    cout<<"Enter Values in Array: "<<endl;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    for(int i = 0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            cout<<"Array is Not Sorted: ";
            return 0;
        }

    }
    cout<<"Array is Sorted: ";
    return 0;
}