#include <bits/stdc++.h>
using namespace std;

int setbit(int result, int i){
    return 1<<i | result;
}

int unique_element(int arr[], int n){
    int result = 0;
    for(int i=0; i<64; i++){
        int sum = 0;
        for(int j=0; j<n; j++){
            if(arr[j] & 1<<i){
               sum++; 
            }
        }
        if ( sum%3 != 0){
            result = setbit(result, i);
        }
    }
    return result;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<unique_element(arr, n);
    
    return 0;
}