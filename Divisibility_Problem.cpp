#include <iostream>
using namespace std;
int main(){
    int t,a,b;
    cin >> t;
    int r[t];
    for(int i=0; i<t; i++){
        int n = 0;
        cin >> a;
        cin >> b;
        if(a<b && a==b){
            r[i]=b-a;
        }else{
            if(a%b!=0){
                int n = a/b;
                r[i]=(n+1)*b - a;
            }else{
                r[i]=0;
            }
        }
    }
    for(int i=0; i<t; i++){
        cout << r[i] << endl;
    }
}
