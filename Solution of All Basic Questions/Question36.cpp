// Sum of elements in array
#include<iostream>
#include<vector>
using namespace std;
int main(){ 
    cout<<"Enter Array Size: ";
    int n; cin>>n;
    vector<int> arr(n,0); int sum =0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<"Sum of Elements is: "<<sum;
    return 0;
    
}