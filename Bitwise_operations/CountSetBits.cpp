/*
Write a program to count the number of ones in binary representation of a number
*/
#include <bits/stdc++.h>
using namespace std;

int no_of_ones(int n){
    int count=0;
    while (n!=0)
    {
        n = n & (n-1);
        count++;
    }
    return count;
    
}

int main(){
    int n;
    cin>>n;

    cout<<no_of_ones(n);
    
    return 0;
}