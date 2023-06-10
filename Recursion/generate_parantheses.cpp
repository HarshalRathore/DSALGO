#include <bits/stdc++.h>
using namespace std;

void AllPossibleParantheses(int n, vector<string> &result, int open=0, int close=0, string str=""){
    if(open<close || close>n || open>n) return;
    if(open==n && close==n){
        result.push_back(str);
    }
    
    AllPossibleParantheses(n, result, open+1, close, str+"(");
    AllPossibleParantheses(n, result, open, close+1, str+")");
}

int main(){
    vector<string> result;
    AllPossibleParantheses(89, result);
    for(auto i:result) cout<<i<<"\n";
    
    return 0;
}