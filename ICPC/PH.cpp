#include <iostream>
using namespace std;
int main()
{
    int test;
    int counter;
    int num_elem;
    int num_react;
    int e1,e2;
    cin >> test;

    for(int i=0; i<test; i++){
        cin >> num_elem;
        cin >> num_react;

        for(int j=0; j<num_elem; j++){
            cin >> e1 >> e2;
        }
        for(int k=0; k<num_react*3; k++){
            int arr[num_react*3];
            cin >> arr[k];
        }
        //int s = sizeof(arr) / sizeof(arr[0]);
        for (int x = 0; x <num_react*3 ; x++) {
          for (int y = x + 1; y <num_react*3; y++) {
            if (arr[i] == arr[y]) {
              counter++;
            }
          }
        }
        cout << arr.length()-counter;
    }
}
