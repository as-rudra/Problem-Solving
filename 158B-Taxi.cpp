#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    int taxi = 0;
    int count = 0;
    int g[t];

    for (int i = 0; i < t; i++) {
        cin >> g[i];
    }
    int n = 0;
    bool flag = true;
    while (flag) {
        taxi += g[n];
        n++;
        if (taxi > 4) {
            count++;
            taxi = 0;
            n--;
        }
        else if (taxi == 4) {
            count++;
            taxi = 0;
        }

        if (n >= t) {
            flag = false;
        }
    }
    if (taxi > 0) {
        count++;
    }

    cout << count;

    return 0;
}
