#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[5][5] = {{1, 2, 3, 4, 0},
                     {4, 5, 6, 7, 0}, 
                     {7, 8, 9, 1, 0},
                     {11, 12, 13, 14, 15},
                     {16, 17, 18, 19, 20}};

    for(int i=0; i<5; i++){
        for(int j=i+1; j<5; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}