// You are given a decimal number N. You need to find the gray code of the number N and convert it into decimal.
// reference https://www.youtube.com/watch?v=R7uuIACpdGQ
//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    //  Function to find the gray code of given number n
    int greyConverter(int n)
    {
        
        // Your code here
        int ans = n;
        n = n>>1;
        ans = ans ^ n;
        return ans;
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t,n;
    cin>>t;//testcases
    while(t--)
    {
        cin >> n;//input n
        Solution ob;
        //calling greyConverter() function
        cout << ob.greyConverter(n) << endl;
    }
}

// } Driver Code Ends