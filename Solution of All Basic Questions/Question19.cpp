#include<iostream>
#include<vector>
using namespace std;
int BinarySearch(vector<int> arr, int st, int end, int k){
    if(st>end) return -1;
    int mid = st + (end - st)/2;
    if( arr[mid] == k){
        return mid;
    }
    else if(arr[mid]> k){
        return BinarySearch(arr, st, mid -1, k);
    }
    else if(arr[mid]< k){
        return BinarySearch(arr, mid +1 , end, k);
    }
    return -1;

}
int main(){
    vector<int> arr = {9,18,45,68,69,70,100,150,200,600,625,1000,1024,2048,4096};
    cout<<"Enter Key Value: ";
    int k; cin>>k;
    cout<<"Key is Found at index :" <<BinarySearch(arr, 0, arr.size()-1,k);
    return 0;
}