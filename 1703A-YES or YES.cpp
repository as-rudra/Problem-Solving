#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;
    cin >> t;
    string check = "yes";
    string s;
    for(int i=0; i<t; i++){
        cin >> s;
        for (int j = 0; j<s.length(); j++) {
            s[j] = tolower(s[j]);
        }
        if(s==check){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}
