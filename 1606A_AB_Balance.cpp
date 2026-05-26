#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;

    string s;
    cin >> t;
    for(int i=0; i<t; i++){
        int sub_ab=0;
        int sub_ba=0;
        cin >> s;
        for(int j=0; j<s.size()-1; j++){
            if(s.substr(j,2)=="ab"){
                sub_ab++;
            }
        }
        for(int j=0; j<s.size()-1; j++){
            if(s.substr(j,2)=="ba"){
                sub_ba++;
            }
        }
        if(sub_ab>sub_ba){
            for(int j=0; j<s.size(); j++){
                if(s[j]=='a'){
                    s[j]='b';
                    break;
                }
            }
        }else if(sub_ab<sub_ba){
            for(int j=0; j<s.size(); j++){
                if(s[j]=='b'){
                    s[j]='a';
                    break;
                }
            }
        }
        cout << s << endl;
    }

}
