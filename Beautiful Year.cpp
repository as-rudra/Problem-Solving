#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    string s_n;
    cin >> n;
    n++;

    bool flag = true;
    while(flag){
        int test = 1;
        s_n = to_string(n);
        for(int i=0; i<3; i++){
            for(int j=i+1; j<4; j++){
                if(s_n[i]==s_n[j]){
                    n++;
                    test = 0;
                    break;
                }
            }
            if(test==0){
                break;
            }
        }
        if(test==1){
            flag=false;
        }
    }
    cout << n;

}
