#include <iostream>
using namespace std;
int main(){
    string p;
    cin >> p;
    int n = 0;
    for(int i=0; i<p.length(); i++){
        if(p[i]=='H' || p[i]=='Q' || p[i]=='9'){
            cout << "YES";
            break;
        }else{
            n++;
        }
    }
    if(n==p.length()){
        cout << "NO";
    }
}
