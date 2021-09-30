#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin>>n>> m;
    int arr[n][m];
    
    // Taking in 2d array
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    int start_row=0, end_row=n-1, start_col=0, end_col=m-1;
    while(start_row<=end_row && start_col<=end_col){
        if (start_row<=end_row){
            for(int i=start_col; i<=end_col; i++){
                cout<<arr[start_row][i]<<" ";
            }
        }
        start_row++;
        if (start_col<=end_col){
            for(int i=start_row; i<=end_row; i++){
                cout<<arr[i][end_col]<<" ";
            }
        }
        end_col--;
        if (start_row<=end_row){
            for(int i=end_col; i>=start_col; i--){
                cout<<arr[end_row][i]<<" ";
            }
        }
        end_row--;
        if (start_col<=end_col){
            for(int i=end_row; i>=start_row; i--){
                cout<<arr[i][start_col]<<" ";
            }
        }
        start_col++;
    }
    return 0;
}