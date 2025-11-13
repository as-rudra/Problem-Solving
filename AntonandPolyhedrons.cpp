#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    string arr[n];
    int faces=0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i]=="Tetrahedron"){
            faces = faces+4;
        }else if(arr[i]=="Cube"){
            faces = faces+6;
        }else if(arr[i]=="Octahedron"){
            faces = faces+8;
        }else if(arr[i]=="Dodecahedron"){
            faces = faces+12;
        }else{
            faces = faces+20;
        }
    }
    cout << faces;
}
