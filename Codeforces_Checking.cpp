#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    string c ="codeforces";
    string s;
    for(int i=0; i<t; i++){
        cin >> s[i];
    }
    int flag = 0;
    for(int i=0; i<t; i++){
        for(int j=0; j<c.length(); j++){
            if(s[i]==c[j]){
                flag++;
                break;
            }
        }
        if(flag>0){
            cout << "YES" << endl;
        }else{
            cout << "NO"<< endl;
        }
        flag = 0;
    }
}
