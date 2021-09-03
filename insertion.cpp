#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n){
    for (int i = 1; i<n; i++){
        int curr = arr[i];
        for (int j = i-1; j >= 0; j--){
            if (arr[j] > curr){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    insertion_sort(arr, n);


    for (int i = 0; i < n; i++){
        cout<< arr[i]<<" ";
    }

    return 0;
}