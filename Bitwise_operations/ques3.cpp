/*
Find a unique element in array with using Bit Manipulation logic.
Using The XOR trick
Refer this article https://florian.github.io/xor-trick/
*/
#include <bits/stdc++.h>
using namespace std;

int UniqueElement(int arr[], int n){
    int XORsum = 0;
    for(int i=0; i<n; i++){
        XORsum = XORsum ^ arr[i];
    }
    return XORsum;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    cout<<UniqueElement(arr, n);
    
    return 0;
}