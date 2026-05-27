#include <iostream>
#include <algorithm>

using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int min = 0;
        int sum = 1;
        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int *minPtr = min_element(arr, arr + n);
        int minIndex = minPtr - arr;
        arr[minIndex]++;
        for(int i=0; i<n; i++){
            sum = sum*arr[i];
        }
        cout << sum << endl;
    }
}
