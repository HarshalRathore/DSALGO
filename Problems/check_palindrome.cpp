/*
If the Order(pronounceation) of the Word does not change whether it is written in straingt or reverse order then it is called a palindrome.
check if the give word is palindrome. 
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of Word = ";
    cin>>n;
    char char_arr[n+1];
    cin>>char_arr;
    int i=0, j=n-1;
    while(i<=j){
        if (char_arr[i]!=char_arr[j]){
            cout<<"False";
            return 0;
        }
        i++, j--;
    }
    cout<<"True";
    return 0;
}