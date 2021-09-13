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
    // Ideally we should create an array count[max] but
    // we can't as an array can not be dynamically allocated
    int count[1000]={0};
    for (int i=0; i<n; i++){
        count[arr[i]]++;
    }

    // creating the sorted array 
    for (int i=0; i<n; i++){
        if (i-1>=0){
        count[i]+=count[i-1];
        }
    }

    for (int i=n-1; i>=0; i--){
        int temp=--count[temparr[i]];
        arr[temp]=temparr[i];
    }

}

int main(){
    int arr[10]={10, 10, 8, 8, 6, 6, 4, 4, 2, 1};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    Count_sort(arr, n);
    
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}