// Selection sort
#include<iostream>
#include<vector>
using namespace std;
int main(){
    cout<<"Enter Array Size: ";
    int n; cin>>n;
    cout<<"Enter Array Elements: ";
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    } 
    for(int i = 0; i< n - 1; i++){
        int minIdx = i;
        for (int j = i+1; j<n; j++){
            if(arr[j]<arr[minIdx]){
                minIdx = j;
            }
            swap(arr[i],arr[minIdx]);

        }
    }
    for(int i: arr){
        cout<<i<<" ";
    }
    return 0;
}