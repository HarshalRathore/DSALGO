#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, m;
    cin>>a>>m;
    
    for(int i=a; i<m; i++){
        if((a*i) % m == 1) cout<<i<<endl;
    }
    
    return 0;
}