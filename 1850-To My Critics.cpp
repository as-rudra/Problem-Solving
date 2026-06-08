#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    int a, b, c;
    for(int i=0; i<t; i++){
        cin >> a >> b >> c;
        if((a+b)>=10 ){
            cout << "YES" << endl;
        }else if((a+c)>=10){
            cout  << "YES" << endl;
        }else if((b+c)>=10){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

}
