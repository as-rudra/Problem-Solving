#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    int str_len;
    string s1,s2;
    for(int i=0; i<test; i++){
        cin >> str_len;
        cin >> s1;
        cin >> s2;
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());

        if(s1==s2){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }


    }
}
