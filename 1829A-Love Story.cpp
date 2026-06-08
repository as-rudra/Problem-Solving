#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    string s = "codeforces";

    for(int i=0; i<t; i++){
        string inputString;
        int count = 0;
        cin >> inputString;
        for(int j=0; j<10; j++){
            if(s[j]!=inputString[j]){
                count++;
            }
        }
        cout << count << endl;
    }
}
