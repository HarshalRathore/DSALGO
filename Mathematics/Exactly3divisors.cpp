// Given a positive integer value N. The task is to find how many numbers less than or equal to N have numbers of divisors exactly equal to 3
// The idea was that only the Squares of prime numbers(eg. 2,3,5,7...) have exactly 3 divisors 

#include <bits/stdc++.h>
using namespace std;

bool isprime(int N){
    if(N<=1) return false;
        
    if(N%2 == 0){
        if(N == 2) return true;
        return false;
    }
    
    if(N%3 == 0){
        if(N == 3) return true;
        return false;
    } 
    
    for(int i=5; i*i<=N; i+=6){
        if(N%i == 0) return false;
        if(N%(i+2) == 0) return false;
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    int count = 0;
    for(int i=2; i*i<=n; i++){
        if(isprime(i)) count++;
    }
    cout<<count<<endl;
    return 0;
}