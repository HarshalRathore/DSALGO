#include <bits/stdc++.h>
using namespace std;

int main(){
    int n1, n2, n3;
    cin>>n1>>n2>>n3;
    int arr1[n1][n2], arr2[n2][n3], arr3[n1][n3];
    int value = 0;

    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++)
            cin>>arr1[i][j];
    }
    for(int i=0; i<n2; i++){
        for(int j=0; j<n3; j++)
            cin>>arr1[i][j];
    }
    for(int i=0; i<n1; i++){
        for(int j=0; j<n3; j++){
            arr1[i][j]=0;
        }
    }
    for(int i=0; i<n1; i++){
        for(int j=0; j<n3; j++)
            cout<<arr3[i][j]<<" ";
        cout<<endl;
    }
    
    for(int i=0; i<n1; i++){
        for(int j=0; j<n3; j++){
            for(int k=0; k<n2; k++)
                arr3[i][j]+=arr1[i][k]*arr2[k][j];
            // arr3[i][j]=value;
            // value=0;
        }
    }

    for(int i=0; i<n1; i++){
        for(int j=0; j<n3; j++)
            cout<<arr3[i][j]<<" ";
        cout<<endl;
    }
    
    return 0;
}