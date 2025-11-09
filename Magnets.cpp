#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    string temp;
    string s;
    cin >> temp;

    int counter=1;
    for(int i=1; i<n; i++){
        cin >> s;
        if(temp!=s){
            counter++;
        }
        temp = s;
    }
    cout << counter;
}
