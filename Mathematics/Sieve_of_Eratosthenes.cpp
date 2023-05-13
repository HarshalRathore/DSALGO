// Find all the possible prime numbers between the numbers a and b
// example I/P 0 10
//         O/P 2 3 5 7
// Reference https://youtu.be/klcIklsWzrY

#include <bits/stdc++.h>
using namespace std;

void sieveOfEratosthenes(int a, int b){
    bool arr[b+1];
    for(int i=0; i<b+1; i++){
        arr[i]=true;
    }
    arr[0]=arr[1]=false;
    for(int i=2; i<sqrt(b); i++){
        if(arr[i]==true){
            for(int j=i*i; j<=b; j+=i){
                arr[j]=false;
            }
        }
    }
    for(int i=a; i<=b; i++){
        if(arr[i]==true)
            cout<<i<<endl;
    }
}

int main(){
    int a, b;
    cin>>a >>b;
    
    sieveOfEratosthenes(a, b);
    
    return 0;
}