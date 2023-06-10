

#include <bits/stdc++.h>
using namespace std;

void generatestrings(int &n, string current, int i = 0)
{
    if(current.find("00") != string::npos) return;
    if (i == n)
    {
        cout << current << " ";
        return;
    }
    current[i] = '0';
    generatestrings(n, current, i + 1);
    current[i] = '1';
    generatestrings(n, current, i + 1);
}

void generateBinaryStrings(int num)
{
    // Write your code
    string s(num, '1');
    generatestrings(num, s);
}

int main()
{
    int n = 10;
    generateBinaryStrings(n);

    return 0;
}