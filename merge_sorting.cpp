#include <bits/stdc++.h>
using namespace std;

void actual_merge(int arr[], int low, int high, int mid){

    int temp[high+1], k=0, i=low, j=mid+1;
    while (i <= mid && j <= high){
        if (arr[i]<arr[j]){
            temp[k]=arr[i];
            i++,k++;
        }
        else {
            temp[k]=arr[j];
            j++,k++;
        }
    }
    while (i<=mid){
        temp[k]=arr[i];
        k++,i++;
    }
    while (j<=high){
        temp[k]=arr[j];
        k++,j++;
    }

    // for(int i=0; i<high; i++){
    //     cout<<temp[i]<<" ";
    // }
    // cout<<endl;
    for(int i=0; i<=high; i++){
        arr[i]=temp[i];
    }

}

void merge_sort(int arr[], int high, int low){
    //here deviding the orginal array in small small parts with the help of recursion
    if (low<high){
        int mid = (low + high)/2;
        cout<<"!"<<mid<<"\n";
        merge_sort(arr, mid, low);
        cout<<"@"<<mid<<"\n";
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