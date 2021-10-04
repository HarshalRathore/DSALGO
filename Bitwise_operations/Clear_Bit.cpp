#include <bits/stdc++.h>
using namespace std;

int clear_bit(int n, int posi){
    return ~(1<<posi) & n;
}

int main(){
    int n, posi;
    cin>>n>>posi;

    cout<<clear_bit(n, posi);
    
    return 0;
}