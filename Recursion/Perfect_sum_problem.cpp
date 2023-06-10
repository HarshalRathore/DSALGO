#include <bits/stdc++.h>
using namespace std;

int frequencyCount(int arr[], int n, int sum, int current_sum=0, int index=0)
{
    // code here
    if(index==n){
        if(sum==current_sum) return 1;
        else return 0;
    }
    int pick = frequencyCount(arr, n, sum, current_sum+arr[index], index+1);
    int not_pick = frequencyCount(arr, n, sum, current_sum, index+1);
    
    return pick + not_pick;

}

int main()
{
    int n=6, p=10;
    // cin>>n;
    // vector<int> ans(n);
    int ans[] = {2, 3, 5, 6, 8, 10};
    // for(int i=0; i<n; i++){
    //     cin>>ans[i];
    // }
    // cin>>p;
    cout<<frequencyCount(ans, n, p)<<endl;

    return 0;
}