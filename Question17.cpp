// To find the second largest element in the array
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter Array Size: ";
    cin>>n;
    vector<int> arr(n,0);
    cout<<"Enter Values in Array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    } 
    int first = INT_MIN;
    int second = INT_MIN;
    for(int j = 0; j<n; j++){
        if( arr[j]>first){
            second = first;
            first = arr[j];
        } else if( arr[j] > second && arr[j] != first){
            second = arr[j];
        }
    }
    cout<<second<<" is the second largest Element.";
    return 0;
}