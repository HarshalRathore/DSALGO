#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=5, m=5;
    int arr[n][m]={ {1, 4, 7, 11},
                    {2, 5, 8, 12},
                    {3, 6, 9, 16},
                    {10, 13, 14, 17}};
    int target;
    cout<<"Enter value to search = ";
    cin>>target;
    cout<<endl;

    int r=0, c=m-1;
    while(r<n && c<m){
        if(arr[r][c]==target){
            cout<<"Found It!";
            return 0;
        }
        else if (arr[r][c]<target)
        {
            r++;
        }
        else
            c--;
    }
    cout<<"Not Found!";
    return 0;
}