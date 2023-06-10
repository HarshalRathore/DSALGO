#include <bits/stdc++.h>
using namespace std;

void generateSubsets(string &s, string current, vector<string> &ans, int i){
    if(s.length()==i){
        ans.push_back(current);
        return;
    }
    generateSubsets(s, current, ans, i+1);
    generateSubsets(s, current+s[i], ans, i+1);

}

void generateSubsets(string &s, vector<string> &ans, int index = 0, string current = "")
{
    if (index == s.length())
        ans.push_back((current));
        return;
    generateSubsets(s, ans, index + 1, current + s[index]);
    generateSubsets(s, ans, index + 1, current);
}

int main()
{
    string s = "abc";
    vector<string> ans;
    // generateSubsets(s, "", ans, 0);
    generateSubsets(s, ans);
    sort(ans.begin(), ans.end());
    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}