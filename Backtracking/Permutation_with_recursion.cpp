/*
The task is to print all possible permutation or combination of a given string but 
not print only those combinations who contains 'AB' as a substring.

Using Simple Recursive approach to solve this problem. This approach as you can see first
finds all the possible combinations and then checks them against the given constraints.
So its time complexity is !n*n
*/

#include <bits/stdc++.h>
using namespace std;

void permute(string str, int l, int r){
    if (l==r){
        if (str.find("AB")==string::npos)    
            cout<<str<<" ";
    }
    for(int i=l; i<=r; i++){
        swap(str[i], str[l]);
        permute(str, l+1, r);
        swap(str[i], str[l]);
    }

}

int main(){
    string str = "ABC";
    permute(str, 0, str.length()-1);        
    return 0;
}
