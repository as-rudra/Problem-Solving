#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    int n;
    string s1 = "Timur";
    sort(s1.begin(),s1.end());
    for(int i=0; i<t; i++){
        cin >> n;
        string s2;
        cin >> s2;

        sort(s2.begin(),s2.end());
        if(s1==s2){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}
