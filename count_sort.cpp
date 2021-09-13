#include <bits/stdc++.h>
using namespace std;

void Count_sort(int arr[], int n){
    int max=INT_MIN;
    int temparr[n];
    for (int i=0; i<n; i++){
        temparr[i]=arr[i];
    }
    // get the max element in unsorted array
    for (int i=0; i<n; i++){
        if (arr[i]>max){
            max=arr[i];
        }
    }
    // creating count array & assining values
    int count[max+1]={0};
    for (int i=0; i<n; i++){
        count[arr[i]]++;
    }

    // adding an elements before elements count to it
    for (int i=0; i<max+1; i++){
        if (i-1>=0){ // to avoid core dump
            count[i]+=count[i-1];
        }
    }
    
    // creating the sorted array 
    for (int i=n-1; i>=0; i--){
        int temp=--count[temparr[i]];
        arr[temp]=temparr[i];
    }

}

int main(){
    int arr[15]={98, 10, 8, 8, 6, 6, 4, 4, 2, 1, 23, 43, 45, 54, 23};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    Count_sort(arr, n);
    
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
