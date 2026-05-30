#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    int s;
    cin >> s;
    int arr[s];

    for(int i=0; i<s; i++){
        cin >> arr[i];
    }
    int m;

    if(arr[0]==arr[1]){
        m = arr[0];
    }else if(arr[1]==arr[2]){
        m = arr[1];
    }else{
        m = arr[2];
    }
    for(int j=0; j<s; j++){
        if(m!=arr[j]){
            cout << j+1;
            break;
        }
    }
}
