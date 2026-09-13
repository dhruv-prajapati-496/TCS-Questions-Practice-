// Transpose of the matrix
#include<iostream>
#include<vector>
using namespace std;
int main(){
    cout<<"Enter Number of Rows And Columns: "<<endl;
    int r,c;
    cout<<"Rows: "; cin>>r;
    cout<<"Columns: "; cin>>c;
    vector<vector<int>> arr(r,vector<int>(c,0));
    cout<<"Enter Values in Array: "<<endl;
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c ; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Transpose of Matrix: "<<endl;
    for(int i = 0; i<c ; i++){
        for (int j = 0; j<r; j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}