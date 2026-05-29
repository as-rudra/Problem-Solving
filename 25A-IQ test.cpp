#include <iostream>
using namespace std;
int main(){
    int t;
    int even = 0;
    int odd = 0;
    cin >> t;
    int arr[t];
    for(int i=0; i<t; i++){
        cin >> arr[i];
        if(arr[i]%2==0){
            arr[i]=1;
            even++;
        }else{
            arr[i]=0;
            odd++;
        }
    }
    if(even>odd){
        for(int i=0; i<t; i++){
            if(arr[i]==0){
                cout << i+1;
                break;
            }
        }
    }else{
        for(int i=0; i<t; i++){
            if(arr[i]==1){
                cout << i+1;
                break;
            }
        }
    }
}
