#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int t,year;
    cin >> t;

    for(int i=0; i<t; i++){
        cin >> year;
        float r_year = sqrt(year);
        float z = r_year - (int)r_year;
        if(z!=0){
            cout << "-1" << endl;
            continue;
        }else{
            int n1 = floor(r_year/2);
            int n2 = r_year - n1;
            cout << n1 << " " << n2;
        }

    }
}
