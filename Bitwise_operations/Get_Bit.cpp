/*
The task is to find what bit is present in a given number at a given place i.e 0 or 1.
*/

#include <bits/stdc++.h>
using namespace std;

void get_position(int num, int posi){

    if (((1<<posi) && num) != 0){
        cout<<"1";
    }
    else{
        cout<<"0";
    }

}

int main(){
    int n, position;
    cin>>n>>position;

    get_position(n, position);
    
    return 0;
}