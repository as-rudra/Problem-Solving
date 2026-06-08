#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    string s = "abc";
    for(int i=0; i<t; i++){
        string testString;
        int count = 0;
        cin >> testString;
        for(int j=0; j<3; j++){
            if(s[j]==testString[j]){
                count ++;
            }
        }
        if(count>=1){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}
