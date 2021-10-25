#include <bits/stdc++.h>
using namespace std;

bool isSafe(string str,int l, int i, int r){
    if(l!=0 && str[l-1]=='A' && str[l]=='B')
        return false;
    if(l!=0 && str[l]=='A' && str[l+1]=='B')
        return false;
    return true;
}

void permute(string str, int l, int r){
    
    if(l==r){
        cout<<str<<" ";
        return;
    }else{
        for(int i=l;i<=r;i++){
            swap(str[i],str[l]);
            if(isSafe(str,l,i,r))
                permute(str,l+1,r);
            swap(str[i],str[l]);
            
        }
    }
}

int main() {
	
	string str="ABCD";
	
    permute(str,0,str.length()-1);      
    return 0;  
	
}