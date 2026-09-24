#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    cout<<"Enter Array Size: ";
    int n; cin>>n; int min = INT_MAX; 
    vector<int> arr(n,0);
    for(int i = 0; i<n; i++){
        cin>>arr[i];
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout<<"Minimum Element is: "<<min<<endl;
    return 0;
}