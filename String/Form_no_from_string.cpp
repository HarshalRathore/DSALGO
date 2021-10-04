/*
for the biggest no from string
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    string num = "293874";

    sort(num.begin(), num.end(), greater<int>());

    cout<<num;
    return 0;
}