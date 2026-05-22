#include <iostream>
using namespace std;
int main(){
    int t;
    int n=0;
    cin >> t;

    int s[t];
    //input number
    for(int i=0; i<t; i++){
        cin >> s[i];
    }

    int min = s[0];
    int max = s[0];

    for(int i=1; i<t; i++){
        if(s[i]<min){
           min = s[i];
           n++;
        }else if(s[i]>max){
            max = s[i];
            n++;
        }
    }
    cout << n;
}
