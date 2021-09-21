// Of all the possible sub-array's sum find which one is Maximum

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int CumSumArr[n]; // Cumulative Sum Array
    CumSumArr[0]=arr[0];
    for (int i=1; i<n; i++){ // Creating Cumulative Sum array 
        CumSumArr[i]=CumSumArr[i-1]+arr[i];
    }

    int max_sum = INT_MIN; // This will containe the possible MAX-sum among all the sum of possible subarrays 
    for (int i=0; i<n; i++){ // We are basically using 2-pointer approch here
        max_sum=max(CumSumArr[i], max_sum);

        for (int j=0; j<i; j++){
            max_sum=max(CumSumArr[i]-CumSumArr[j], max_sum);
        }
    }
    cout<<max_sum;
    return 0;
}