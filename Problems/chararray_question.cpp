/*

*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    char sentence[n+1];
    cin.ignore();
    cin.getline(sentence, n);
    int count=0, max_count=INT_MIN;
    int pointer_4_count = 0, pointer_4_max_count = 0;

    for(int i=0; i<=49-1; i++){
        max_count=max(count, max_count);
        if (max_count==count)
            pointer_4_max_count=pointer_4_count;
        if (sentence[i]==32 || sentence[i]=='\0'){
            count=0;
            pointer_4_count=i+1;
            continue;
        }
        else
            count++;
    }
    cout<<max_count<<endl;

    for(int i=0; i<max_count; i++){
        cout<<sentence[i+pointer_4_max_count];
    }
    
    return 0;
}