#include<iostream>
#include<vector>
using namespace std;
int main(){
    cout<<"Enter Size of Array 1: ";
    int n1; cin>>n1;
    cout<<"Enter Values in Array 1: "<<endl;
    vector<int> arr1(n1,0);
    for(int i = 0; i<n1; i++){
        cin>>arr1[i];
    }
    cout<<"Enter Size of Array 2: ";
    int n2; cin>>n2;
    cout<<"Enter Values in Array 2: "<<endl;
    vector<int> arr2(n2,0);
    for(int i = 0; i<n2; i++){
        cin>>arr2[i];
    }
    vector<int> merged(n1+n2,0);
    for(int i = 0; i<n1;i++){
        merged[i] = arr1[i];
    }
    for(int i = 0; i<n2;i++){
        merged[n1+i] = arr2[i];
    }
    cout<<"Merged Array is: "<<endl;
    for(int i : merged){
        cout<<i<<" ";
    }
    return 0;

}
