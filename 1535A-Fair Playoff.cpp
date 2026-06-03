#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int a[4];

        for(int i = 0; i < 4; i++)
            cin >> a[i];

        int w1 = max(a[0], a[1]);
        int w2 = max(a[2], a[3]);

        sort(a, a + 4);

        if(min(w1, w2) == a[2] && max(w1, w2) == a[3])
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
