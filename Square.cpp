#include <iostream>
using namespace std;
int main()
{
    int t,z;
    int counter =0;
    cin >> t;
    int arr[4];
    for(int i=0; i<t; i++){
        counter = 0;
        for(int j=0; j<4; j++){
            cin >> arr[j];
        }
        z=arr[0];
        for(int k=0; k<4; k++){
            if(arr[k]==z){
                counter++;
            }
        }
        if(counter==4){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}
