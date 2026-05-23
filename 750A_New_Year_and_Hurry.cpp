#include <iostream>
using namespace std;
int main(){
    int p,time;
    cin >> p >> time;
    int solve_time=0;
    int i = 1;
    for(i=1; i<=p; i++){
        solve_time = solve_time + 5*i;
        if((solve_time+time)>240){
            cout << i-1;
            break;
        }
    }
    if((solve_time+time)<=240){
        cout <<i-1;
    }
}
