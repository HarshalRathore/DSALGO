#include <bits/stdc++.h>
using namespace std;

// int StringApproach(string x, int d)
// {
//     int temp = x.back() - '0';
//     for (int i = x.length() - 2; i >= 0; i--)
//     {
//         int value = x[i] - '0';
//         if (value == d || value <= temp)
//             return 0;
//         temp = temp + value;
//     }
//     return 1;
// }

int checkcondition(int n, int d)
{
    int value = n % 10;
    int sum = value;
    n = n / 10;
    while (n > 0)
    {
        value = n % 10;
        if (value == d || value <= sum)
            return 0;
        else
        {
            sum = sum + value;
            n /= 10;
        }
    }
    return 1;
}

void generategoodnumbers(int l, int r, int d, int current, vector<int> &ans)
{
    if (current > r)
        return;
    if (checkcondition(current, d))
        ans.push_back(current);
    generategoodnumbers(l, r, d, current + 1, ans);
}

vector<int> goodnumbers(int L, int R, int D)
{
    vector<int> ans;
    // for (int i = L; i <= R; i++)
    // {
    //     // if (checkcondition(i, D))
    //     //     ans.push_back(i);

    //     if(StringApproach(to_string(i), D)) ans.push_back(i);
    // }
    // return ans;

    generategoodnumbers(L, R, D, L, ans);
    return ans;
}

int main()
{
    int L = 200, R = 700, D = 4;
    vector<int> ans = goodnumbers(L, R, D);
    for (auto i : ans)
        cout << i << " ";
    cout << endl;
    return 0;
}