#include <bits/stdc++.h>
using namespace std;

bool checkSubsequenceSum(int n, vector<int> &arr, int sum, int current_sum = 0, int index = 0)
{
    // Code here
    if (index == n)
    {
        if (sum == current_sum)
            return true;
        return false;
    }

    if (current_sum == sum)
        return true;

    if (checkSubsequenceSum(n, arr, sum, current_sum + arr[index], index + 1) == true && current_sum < sum)
        return true;
    if (checkSubsequenceSum(n, arr, sum, current_sum, index + 1) == true)
        return true;
    return false;
}

int main()
{
    int n = 7, sum = 8;
    vector<int> arr = {10, 1, 2, 7, 6, 1, 5};
    cout << ((checkSubsequenceSum(n, arr, sum)) ? "Yes" : "No") << endl;

    return 0;
}