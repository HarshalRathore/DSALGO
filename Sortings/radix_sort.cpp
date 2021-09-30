#include <bits/stdc++.h>
using namespace std;

void count_sort(int arr[], int posi, int n){

    int temparr[n];
    for (int i=0; i<n; i++){
        temparr[i]=arr[i];
    }
    int count[10]={0};
    for (int i=0; i<n; i++){
        count[(arr[i]/posi)%10]++;
    }
    for (int i=1; i<10; i++){
        count[i]+=count[i-1];
    }
    for (int i=n-1; i>=0; i--){
        // arr[count[(arr[i]/posi)%10]-1]=temparr[i];
        temparr[count[(arr[i]/posi)%10]-1] = arr[i];
        count[(arr[i]/posi)%10]--;
    }

    cout<<"array"<<endl;
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void radix_sort(int arr[], int n){
    int max_element=arr[0];
    for (int i=0; i<n; i++){
        max_element=max(arr[i], max_element);
    }
    int j=1;
    for (int i=1; max_element/i>0; i*=10){
        count_sort(arr, i, n);
    }

}

int main(){
    int arr[12]={98, 10, 8, 6, 4, 2, 1, 23, 43, 45, 54, 23};
    int n=sizeof(arr)/sizeof(arr[0]);

    radix_sort(arr, n);
    
    
    return 0;
}