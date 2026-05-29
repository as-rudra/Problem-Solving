#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    int count = 0;
    int arr[t];
    int total_sum = 0;
    for(int i=0; i<t; i++){
        cin >> arr[i];
        total_sum = total_sum + arr[i];
    }
    sort(arr, arr + t, greater<int>());
    int sum = 0;
    for(int i=0; i<t; i++){
        sum = sum + arr[i];
        count++;
        total_sum = total_sum - arr[i];
        if(sum > total_sum){
            cout << count;
            break;
        }
    }

}
