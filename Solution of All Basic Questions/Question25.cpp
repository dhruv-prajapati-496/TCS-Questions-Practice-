// Count Frequency of Element in Array 
#include<iostream>
#include<vector>
using namespace std;
int main(){
    cout<<"Enter Array Size: ";
    int n; cin>>n;
    vector<int> arr(n,0);
    cout<<"Enter "<<n+1<<" Elements in Array: "<<endl;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int count = 0;
    cout<<"Enter Element to be count: "<<endl;
    int k; cin>>k;
    for(int i = 0; i<n; i++){
        if(arr[i]==k){
            count++;
        }
    }
    cout<<k<<" has Appeared "<<count<<" times in Array."<<endl;
    return 0;

}