#include <bits/stdc++.h>
using namespace std;

// 3 4 3
// 2 4 1 2
// 8 4 3 6
// 1 7 9 5
// 1 2 3
// 4 5 6
// 7 8 9
// 4 5 6

int main(){
    int n1=3, n2=4, n3=3;
    int arr1[n1][n2]={{2, 4, 1, 2},
                      {8 ,4 ,3 ,6},
                      {1 ,7 ,9 ,5}};
    int arr2[n2][n3]={{1 ,2 ,3},
                      {4, 5, 6},
                      {7, 8, 9},
                      {4, 5, 6}};
    int arr3[n1][n3];
    int value=0;
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
                value+=arr1[i][k]*arr2[k][j];
            arr3[i][j]=value;
            value=0;
        }
    }

    for(int i=0; i<n1; i++){
        for(int j=0; j<n3; j++)
            cout<<arr3[i][j]<<" ";
        cout<<endl;
    }
    
    return 0;
}