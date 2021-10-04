#include <bits/stdc++.h>
using namespace std;

int main(){
    string word = "i lOvE yOu";

    for(int i=0; i<word.size(); i++){
        if (word[i]>='a' && word[i]<='z'){
            word[i]-=32;
        }
    }
    cout<<word<<endl;
    
    for(int i=0; i<word.length(); i++){
        if (word[i]>='A' && word[i]<='Z'){
            word[i]+=32;
        }
    }
    cout<<word<<endl;

    transform(word.begin(), word.end(), word.begin(), ::toupper);
    cout<<word<<endl;

    transform(word.begin(), word.end(), word.begin(), ::tolower);
    cout<<word<<endl;
    return 0;
}