// among all possible sub-arrays sums find which one is Maximum.

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int MaxSum=INT_MIN, CurrSum=0;
    for (int i=0; i<n; i++){
        if (CurrSum+arr[i]>0){
            CurrSum=CurrSum+arr[i];
            MaxSum=max(CurrSum, MaxSum);
        }
    }
    cout<<MaxSum;
    return 0;
}
