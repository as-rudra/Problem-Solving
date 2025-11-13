#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int x[3];
    cin >> x[0] >> x[1] >> x[2];

    sort(x, x + 3); // sort them in increasing order

    int result = x[2] - x[0]; // max - min

    cout << result;
    return 0;
}
