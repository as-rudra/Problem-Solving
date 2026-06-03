#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    int arr[4];

    while(t--){
        int x = 0;
        int count = 0;
        for(int j=0; j<4; j++){
            cin >> arr[j];
            x = arr[0];
            if(arr[0]<arr[j]){
                count++;
            }
        }
        cout << count << endl;
    }
}
