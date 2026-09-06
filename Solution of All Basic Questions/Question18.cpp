// Linear Search
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter Array Size: ";
    cin>>n;
    vector<int> arr(n,0);
    cout<<"Enter Array Elements: ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter Key Value: ";
    int k; cin>>k;
    int idx = -1;
    for(int j = 0; j<n; j++){
        if(k == arr[j]){
            idx = j;
            break;
        }
    }
    if(idx != -1){
    cout<<"Element is Found at Index "<<idx;
    } else {
        cout<<"Element Not Found";
    }
    return 0;
}