#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S = "abba";
    string reverse;
    for (int i = S.length() - 1; i >= 0; i--)
    {
        reverse += S[i];
    }
    // return (reverse == S) ? 1 : 0;
    if (reverse == S)
        cout << 1;
    else
        cout << 0;
    return 0;
}