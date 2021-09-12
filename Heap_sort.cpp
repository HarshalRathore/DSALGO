#include <bits/stdc++.h>
using namespace std;

void heapify(int arr[], int n, int i){
    int largest = i;
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
    for (int i=(n/2)-1; i>=0; i--){
        heapify(arr, n, i);
    }

    for (int i=n-1; i>=0; i--){
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

int main(){
    // vector<int> vec;
    // vec.push_back(5);
    // vec.push_back(4);
    // vec.push_back(3);
    // vec.push_back(2);
    // vec.push_back(1);

    // cout<<vec.size()<<endl;
    // for (int i=0;i<vec.size();i++){
    //     cout<<vec[i]<<" ";
    // }

    // vector<int>::iterator it;
    // cout<<endl;
    // it=vec.begin();
    // cout<<*it;
    // it++;
    // cout<<*it;
    // sort(vec.begin(), vec.end());
    // cout<<endl;

    // for (int i=0;i<vec.size();i++){
    //     cout<<vec[i]<<" ";
    // }
    int n;
    // cin>>n;
    // int arr[n];
    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }
    int arr[8]={5, 9, 12, 15, 19, 21, 26, 30};
    n=8;

    heap_sort(arr, n);
    
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}