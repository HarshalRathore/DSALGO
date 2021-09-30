#include <bits/stdc++.h>
using namespace std;

int partition_value(int arr[], int high, int low){
    int i=low-1;
    int pivot=arr[high];
    for (int j=low; j<high;j++){
        if (arr[j]<pivot){
            i++;
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    int temp=arr[i+1];
    arr[i+1]=arr[high];
    arr[high]=temp;
    return i+1;
}

void quick_sort(int arr[], int high, int low){
    
    if (low<high){
        int q = partition_value(arr, high, low);

        quick_sort(arr, q-1, low);
        quick_sort(arr, high, q+1);
    }

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    quick_sort(arr, n-1, 0);
    
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
} 