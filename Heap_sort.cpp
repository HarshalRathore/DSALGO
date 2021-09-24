#include <bits/stdc++.h>
using namespace std;

void heapify(int arr[], int n, int i){
    // creating max heap 
    int largest = i; // This variable is a pointer type behaving variable in this code its point is to indicate towards the element greater than its child in the end of heapify funtion and then swap it with its parent
    int left_child = (2*i) + 1;
    int right_child = (2*i) +2;

    if (left_child<n){
        if (arr[left_child]>arr[largest]){
            largest=left_child;
        }
    }
    if (right_child<n){
        if (arr[right_child]>arr[largest]){
            largest=right_child;
        }
    }

    if (largest!=i){
        swap(arr[i],arr[largest]);
        heapify(arr, n, largest);
    }
}

void heap_sort(int arr[], int n){
    
    // building a first max heap starting from last parent node n/2 - 1
    for (int i=(n/2)-1; i>=0; i--){
        heapify(arr, n, i);
    }

    // switching root element to last and last to root then
    // decresing size of array and again heapifying it and then again doing the same shit
    for (int i=n-1; i>=0; i--){
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

int main(){
    int n;
    int arr[8]={5, 9, 12, 15, 19, 21, 26, 30};
    n=8;

    heap_sort(arr, n);
    
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}