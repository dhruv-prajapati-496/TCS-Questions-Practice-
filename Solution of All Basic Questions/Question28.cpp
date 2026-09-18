#include<iostream>
#include<vector>
using namespace std;
int main(){
    cout<<"Enter Number of Terms: ";
    int n; cin>>n;
    vector<int> arr((n-1),0);
    cout<<"Enter Terms 1 to "<<n<<" and Miss a Term: "<<endl;
    for(int i = 0; i<n-1; i++){
        cin>>arr[i];
    }
    int sum =0;
    int total = n*(n+1)/2;
    for(int i : arr){
        sum+=i;
    }
    cout<<"The Missing Number is "<<total - sum;
    return 0;

}