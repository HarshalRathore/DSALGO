#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    // cin>>str;
    // cout<<str<<endl;
    
    string ring(8, 'Y');
    // cout<<ring<<endl;

    string king = "Apni Kaksha";
    // cout<<king<<endl;

    string lol;
    // getline(cin, lol);
    // cout<<lol<<endl;

    string s1="fam";
    string s2="ily";
    // cout<<s1+s2;
    // s1.append(s2);
    // cout<<s1;
    // s1 = s1 + s2;
    // cout<<s1[2];

    string abc = "asdals;dkjf al;skdjf al;skdjf";
    abc.clear();
    // cout<<abc;
    // if(abc.empty())
    //     cout<<"string is fucking empty";

    string a1="abc";
    string a2="xyz";
    string a3="abc";
    // cout<<a2.compare(a1)<<endl; //if value is (+) then it means that string a2 is greater than a1
    // cout<<a1.compare(a3); //0
    
    string hi="nincompoop";
    // hi.erase(3, 3);
    // cout<<hi<<endl;
    // cout<<hi.find("com")<<endl;
    // hi.insert(3, "---");
    // cout<<hi;
    // cout<<hi.size()<<hi.length()<<endl;
    // string s= hi.substr(6, 4); // find sub-string from index 6 with up-to 4 character
    // cout<<s<<endl;

    string n = "123";
    int x = stoi(n); // convert string to integer
    // cout<<(x-2)+200<<endl;

    // cout<<to_string(x) + "-321" << endl;

    string string_sorting = "qweytruiopasdfghjklzxcmnbv";
    sort(string_sorting.begin(), string_sorting.end());
    // cout<<string_sorting<<endl;

    cout<<'a'-'A';

    return 0;
}