#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    int sumx = 0;
    int sumy = 0;
    int sumz = 0;
    int arr[t*3];
    for(int i=0; i<t*3; i++){
        cin >> arr[i];
    }
    for(int i=0; i<t*3; i+=3){
        sumx += arr[i];
    }
    for(int i=1; i<(t*3); i+=3){
        sumy += arr[i];
    }
    for(int i=2; i<(t*3); i+=3){
        sumz += arr[i];
    }
    if(sumx==0 && sumy==0 && sumz==0){
        cout << "YES";
    }else{
        cout << "NO";
    }
}
