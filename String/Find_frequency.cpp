/*
Find the max frequency of a character in a string and also whcich character is it.
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    string word;
    getline(cin, word);

    int arr[123] = {0};

    for(int i=0; i<word.size(); i++){
        arr[int(word[i])]++;
    }
    int frequency=0, index=0;
    for(int i=0; i<123; i++){
        frequency=max(frequency, arr[i]);
        if(frequency==arr[i])
            index = i;
    }
    cout<<static_cast<char>(index)<<endl; // type casting integer to its corresponding ASCII value
    cout<<frequency<<endl;
    
    return 0;
}