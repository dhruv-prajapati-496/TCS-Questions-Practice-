#include<iostream>
#include<vector>
using namespace std;
void BubbleSort(vector<int> &arr){
    for(int i = 0; i< arr.size();i++){
        for(int j = 0; j<arr.size() -i -1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
    int main(){
        cout<<"Enter Array size: ";
        int n; cin>>n;
        vector<int> arr(n);
        cout<<"Enter Array Elements: ";
        for( int i =0; i< n; i++){
            cin>>arr[i];
        }
        BubbleSort(arr);
        cout<<"The Sorted Array is: ";
        for(int i : arr){
        cout<<i<<" ";
        }
        return 0;
    }