// Given an integer N. Find the number of digits that appear in its factorial. 
// Input: N = 5
// Output: 3
// Explanation: Factorial of 5 is 120.
// Number of digits in 120 is 3 (1, 2, and 0)

#include <bits/stdc++.h>
using namespace std;

int digitsInFactorial(int N)
{
    // It is observed that the floor value of log base 
    // 10 increased by 1, of any number, gives the
    // number of digits present in that number.
    // Hence, output would be : floor(log(n!)) + 1. We know log(a*b) = log(a) + log(b)
    if (N <= 1 ) return 1;
    float res = 0;
    while(N != 0){
        res = res + log10(N);
        N--;
    }
    return floor(res) + 1;
}

int digitsinfactorial(int n){
    double x = (n * log10(n / M_E) + log10(2 * M_PI * n) / 2.0);
    return floor(x) + 1;
}

int main(){
    int n;
    cin>>n;
    if(n <= 20){
        cout<<digitsInFactorial(n)<<endl; // Method of using the logarithmic function | TC = O(nlogn)
    }
    else{ // TC => O(1)
        cout<<digitsinfactorial(n)<<endl; // This methos uses a formula derived from strling's factorial functoin approximation log(n!) ≈ .05 * log(2πn) + n * log(n/e)
    }
    return 0;
}