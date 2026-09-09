// Matrix Addition
#include<iostream>
#include<vector>
using namespace std;
int main(){
    cout<<"Enter Number of Rows: ";
    int r,c;
    cin>>r;
    cout<<"Enter Number of Columns: ";
    cin>>c;
    vector<vector<int>> a(r,vector<int>(c,0));
    vector<vector<int>> b(r,vector<int>(c,0));
    vector<vector<int>> sum(r,vector<int>(c,0));
    cout<<"Enter Values in Array A: "<<endl;

    for(int i = 0; i<r; i++){
        for(int j = 0; j<c;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Enter Values in Array B: "<<endl;
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c;j++){
            cin>>b[i][j];
        }
    }
    
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c ; j++){
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    cout<<"Sum of Array A and B is: "<<endl;
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c ; j++){
            cout<<sum[i][j]<<" ";
        } cout<<endl;
    }

}