/*
Use of Euclidean algorithm to find the GCD/HCF.
*/

#include <bits/stdc++.h>
using namespace std;

int getGCD(int a, int b){
    if (b == 0)
        return a;
    return getGCD(b, a%b);
}

int GetGCD(int a, int b){
    if (a==b)
        return a;
    if (a>b)
        return GetGCD(b, a-b);
    else
        return GetGCD(a, b-a);
}

int main(){
    int a, b;
    cin >>a >> b;
    cout<<getGCD(a, b)<<"\n";
    cout<<GetGCD(a, b);
    return 0;
}