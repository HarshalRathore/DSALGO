#include <bits/stdc++.h>
using namespace std;

int update_bit(int n, int posi, int value){
    // first clear bit
    int mask = ~(1<<posi);
    n = n & mask;

    // Now set bit
    return value<<posi | n;
}

int main(){
    int n, posi, value;
    cin>>n>>posi>>value;

    cout<<update_bit(n, posi, value);
    
    return 0;
}