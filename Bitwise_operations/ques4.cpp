/* 
Task:- You are given an array of N integers, all the integers are repeated exactly twice except for 2 integers they come
exactly ones in the entire array. find those 2 integers.
-> first we XOR the etire given array so we get the XOR of those 2 unique integers only then
-> in that XOR we find the right most set bit and devides the original array into two sub-groups one which contain 1 at the same position
as the right-most bit of XOR and other sub-group which contain 0 at the same position as the right-most bit of XOR.
-> then we XOR both the sub-groups among them selves so we get the two unique elements in both the sub-groups.
*/

#include <bits/stdc++.h>
using namespace std;

void unique_elements(int arr[], int n){
    int XORsum = 0;
    for(int i=0; i<n; i++){
        XORsum = XORsum^arr[i];
    }
    int bit_index = 0;
    for(int i=0; i<n; i++){
        if (XORsum & 1<<i){
            bit_index = i;
            break;
        }
    }
    int sub_xorsum_1 = 0;
    int sub_xorsum_2 = 0;
    for(int i=0; i<n; i++){
        if (arr[i] & 1<<bit_index){
            sub_xorsum_1 = sub_xorsum_1 ^ arr[i];
        }
        else{
            sub_xorsum_2 = sub_xorsum_2 ^ arr[i];
        }
    }
    cout<<sub_xorsum_1<<" "<< sub_xorsum_2;

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    unique_elements(arr, n);
    
    return 0;
}