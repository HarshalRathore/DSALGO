#include <bits/stdc++.h>
using namespace std;

int atoi(string str)
{
    // Your code here
    int ans = 0;
    int sign = 1;
    int i = 0;
    if(str[0] == '-'){
        sign = -1;
        i = 1;
    }
    for (; i < str.length(); i++)
    {
        int ch = str[i] - '0';
        ans = ans * 10 + ch;
    }
    return ans*sign;
}

int main()
{
    string s = "1234";
    int n = atoi(s);
    cout << n << endl;

    return 0;
}