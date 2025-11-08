#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int n=0;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='0'){
            n++;
            if(n==7){
                break;
            }
            if(s[i+1]=='1'){
                n=0;
                continue;
            }
        }else{
            n++;
            if(n==7){
                break;
            }
            if(s[i+1]=='0'){
                n=0;
                continue;
            }
        }
    }
    if(n>=7){
        cout << "YES";
    }else{
        cout << "NO";
    }
}
