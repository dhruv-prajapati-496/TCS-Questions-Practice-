#include<iostream>
#include<vector>
using namespace std;
int main(){
    cout<<"Enter Array Size: "<<endl;
    int n; cin>>n;
    vector<int> arr(n,0);
    cout<<"Enter Array Elements: "<<endl;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Duplicates in Array :"<<endl;
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(arr[i]==arr[j]){
                cout<<arr[j]<<" ";

            } break;
        }
    }
    return 0;
}