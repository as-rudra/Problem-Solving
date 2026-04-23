#include <iostream>
using namespace std;
int main(){
    int t,x1,x2,y1,y2;
    cin >> t;

    for(int i=0; i<t; i++){
        int n = 0;
        cin >> x1 >> y1 >> x2 >> y2;

        float m = (y2-y1)/(x2-x1);

        while(x1<x2 && y1<y2){
            x1++; y1++; n++;
            if(x1 >= x2){
                x1--;
                n++;
            }else if(x1==x2 && y1==y2){
                break;
            }else if(x1<x2 && y1>y2){
                cout << "-1";
            }
        }
        cout << n-1;
    }
}
