#include <bits/stdc++.h>
using namespace std;

int set_bit(int n, int posi){
    return (1<<posi) | n;
}

int main(){
    int n, posi;
    cin>>n>>posi;

    cout<<set_bit(n, posi);
    
    return 0;   
}