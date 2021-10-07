/*
Write to check if a given number is power of 2
*/

#include <bits/stdc++.h>
using namespace std;

bool CheckIfPowerOf2(int n){
    if (n && !(n & n-1)){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cin>>n;

    cout<<CheckIfPowerOf2(n);
    
    return 0;
}