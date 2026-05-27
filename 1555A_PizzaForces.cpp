#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        long long n;
        cin >> n;

        if(n<=6){
            cout << "15" << endl;
        }else{
            if(n%2==1){
                n++;
            }
            cout << (n/2)*5 << endl;
        }
    }
}
