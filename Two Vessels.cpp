#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int t,a,b,c,d;

    cin >> t;
    for(int i=0; i<t; i++){
        int n = 0;
        cin >> a >> b >> c;

        d = abs(a-b);

        while(d>0){
            d = d - 2*c;
            n++;
            if(d<=0){
                break;
            }
        }
        cout << n << endl;
    }
}

