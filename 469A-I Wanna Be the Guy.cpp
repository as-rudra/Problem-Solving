#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int seen[101] = {0};

    int p;
    cin >> p;
    for (int i = 0; i < p; i++) {
        int x;
        cin >> x;
        seen[x] = 1;
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int x;
        cin >> x;
        seen[x] = 1;
    }

    int i = 1;
    while (i <= n && seen[i] == 1) {
        i++;
    }

    if (i == n + 1)
        cout << "I become the guy.";
    else
        cout << "Oh, my keyboard!";
}
