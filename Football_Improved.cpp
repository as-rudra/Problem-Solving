#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int counter = 1;
    for (int i = 1; i < s.length(); i++) {
        if (s[i] == s[i - 1]) {
            counter++;
            if (counter == 7) {
                cout << "YES";
                return 0;
            }
        } else {
            counter = 1;
        }
    }
    cout << "NO";
}
