// Given a number and its reverse. Find that number raised to the power of its own reverse.
// Note: As answers can be very large, print the result modulo 109 + 7.

// Example 1:

// Input:
// N = 2
// Output: 4
// Explanation: The reverse of 2 is 2
// and after raising power of 2 by 2
// we get 4 which gives remainder as
// 4 by dividing 1000000007.

// reffrence https://www.youtube.com/watch?v=L-Wzglnm4dM

#include <bits/stdc++.h>
using namespace std;

long long int iterative(int N, int R)
{
    long long int result = 1;
    int modulo = 1e9 + 7;
    // N *= 1LL; wrong not do this way
    long long int a = N;
    while (R > 0)
    {
        if (R % 2 == 1)
            result = (result * a) % modulo;
        a = (a * a) % modulo;
        R >>= 1;
    }
    return result;
}

long long int recursive(int N, int R)
{
    int modulo = 1e9 + 7;
    if (R == 0)
        return 1;
    long long result = recursive(N, R / 2);
    result = (result * result) % modulo;
    if (R % 2 == 1)
        return (result * N) % modulo;
    return result;
}

int main()
{
    int a, b;
    cin >> a, b;
    cout << recursive(a, b);
    cout << iterative(a, b);

    return 0;
}