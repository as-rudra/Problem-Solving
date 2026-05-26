
#include <iostream>
using namespace std;
int main(){
    int t,a,b;
    cin >> t;

    for(int i=0; i<t; i++){
        bool flag = true;
        cin >> a >> b;
        int arr[a];
        for(int j=0; j<a; j++){
            cin >> arr[j];
        }
        for(int k=0; k<a; k++){
            if(arr[k]==b){
                cout << "YES" << endl;
                flag = false;
                break;
            }
        }
        if(flag){
            cout << "NO" << endl;
        }
    }
}
