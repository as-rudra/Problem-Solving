#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    int s[t];
    for(int i=0;i<t*2; i++){
        cin >> s[i];
    }
    int n = 0;
    for(int i=1; i<t*2; i+=2){
        for(int j=0; j<t*2-1; j+=2){
            if(s[i]==s[j]){
                n++;
            }
        }
    }
    cout << n;
}
