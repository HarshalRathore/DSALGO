#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void solution1(vector<int> &arr, int sum, vector<vector<int>> &result, vector<int> current_seq, int index = 0)
    {
        if (index == arr.size())
        {
            if (sum == 0)
            {
                if ((find(result.begin(), result.end(), current_seq) == result.end()))
                {
                    sort(current_seq.begin(), current_seq.end());
                    result.push_back(current_seq);
                }
            }
            return;
        }
        if (arr[index] <= sum)
        {
            current_seq.push_back(arr[index]);
            solution1(arr, sum - arr[index], result, current_seq, index + 1);
            current_seq.pop_back();
        }
        solution1(arr, sum, result, current_seq, index + 1);
    }

    void solution2(vector<int> &arr, int sum, vector<vector<int>> &result, vector<int> current_seq, int index = 0)
    {
        if (index == arr.size())
        {
            if (sum == 0) result.push_back(current_seq);
            return;
        }
        if (arr[index] <= sum)
        {
            current_seq.push_back(arr[index]);
            solution2(arr, sum - arr[index], result, current_seq, index + 1);
            current_seq.pop_back();
        }
        solution2(arr, sum, result, current_seq, index + 1);
    }

    void solution3(vector<int> &arr, int sum, vector<vector<int>> &result, vector<int> &current_seq, int index=0){
        if(sum==0){
            result.push_back(current_seq);
            return;
        }

        for(int i=index; i<arr.size(); i++){
            if(i>index && arr[i]==arr[i-1]) continue;
            if(arr[i]>sum) break;
            current_seq.push_back(arr[i]);
            solution3(arr, sum-arr[i], result, current_seq, i+1);
            current_seq.pop_back();
        }
    }


    vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
    {
        // Just uncomment the parts under the solution and comment all other under other solutions to execute that solution.
        vector<int> current_seq;
        vector<vector<int>> result;

        // Solution 1 this works too but the time complexity is just greater than (2^n)*K cause of the find() operation which has O(N) Time Complexity. find() operation is here just to check if the sorted result already contains the combination or not also the sort in find() has time complexity of O(N*LogN) so cumulative time complexity comes to be greater than O((2^n)*K). 
        // sort(candidates.begin(), candidates.end());
        // solution1(candidates, target, result, current_seq);

        // Solution 2 This solution sorts the test case array and after generating all the combination that has sum equal to K it erases/removes those duplicates with erase() function. This solution too has TC greater than 2^n*K.
        // sort(result.begin(), result.end());
        // solution2(candidates, target, result, current_seq);
        // result.erase(unique(result.begin(), result.end()), result.end());

        // Solution 3
        sort(result.begin(), result.end());
        solution3(candidates, target, result, current_seq);

        return result;
    }
};

int main()
{
    // this main() code is fucked up cause it is not outputing correctly the answers

    int t = 6;
    // cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> candidates(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> candidates[i];
        }

        Solution obj;

        vector<vector<int>> comb = obj.combinationSum2(candidates, k);
        sort(comb.begin(), comb.end());
        cout << "[ ";
        for (int i = 0; i < comb.size(); i++)
        {
            cout << "[ ";
            for (int j = 0; j < comb[i].size(); j++)
            {
                cout << comb[i][j] << " ";
            }
            cout << "]";
        }
        cout << " ]\n";
    }
    fclose(stdout);
    return 0;
}


