#include <bits/stdc++.h>
using namespace std;

void CombinationSumIII(int n, int sum, vector<vector<int>> &result, vector<int> &current, int index = 1)
{
    if (current.size() == n)
    {
        if (sum == 0)
            // cout<<index;
            result.push_back(current);
        return;
    }
    for (int i = index; i <= 9; i++)
    {
        if (i <= sum)
        {
            current.push_back(i);
            CombinationSumIII(n, sum - i, result, current, i + 1);
            current.pop_back();
        }
        else
            return;
    }
}

vector<vector<int>> combinationSum(int K, int N)
{
    // code here
    vector<int> current;
    vector<vector<int>> result;
    CombinationSumIII(K, N, result, current);
    return result;
}

int main()
{
    int n, sum;
    cin >> n >> sum;
    vector<vector<int>> ans = combinationSum(n, sum);
    sort(ans.begin(), ans.end());
    for (auto &arr : ans)
    {
        for (auto it : arr)
            cout << it << " ";
        cout << endl;
    }

    return 0;
}