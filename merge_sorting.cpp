#include <bits/stdc++.h>
using namespace std;

void actual_merge(int arr[], int low, int high, int mid){


    int n1=mid-low+1;
    int n2=high-mid;
    int a1[n1], a2[n2];
    
    for (int i=0; i<n1; i++){
        a1[i] = arr[i+low];
    }
    for (int i=0; i<n2; i++){
        a2[i] = arr[mid+1+i];
    }

    int k=low, i=0, j=0;
    while (i < n1 && j < n2){
        if (a1[i]<a2[j]){
            arr[k]=a1[i];
            i++,k++;
        }
        else {
            arr[k]=a2[j];
            j++,k++;
        }
    }
    while (i<n1){
        arr[k]=a1[i];
        k++,i++;
    }
    while (j<n2){
        arr[k]=a2[j];
        k++,j++;
    }


}

void merge_sort(int arr[], int high, int low){
    //here deviding the orginal array in small small parts with the help of recursion
    if (low<high){
        int mid = (low + high)/2;
        merge_sort(arr, mid, low);
        merge_sort(arr, high, mid+1);

        //this is merging the sub-arrays while sorting them 
        actual_merge(arr, low, high, mid);
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    merge_sort(arr, n-1, 0);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}