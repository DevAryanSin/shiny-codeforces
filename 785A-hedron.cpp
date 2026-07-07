#include <bits/stdc++.h>


using namespace std;

int main(){
    int t;
    cin >> t;   
    int ans =0;
    

    while(t--){
        string str;
        cin >> str;

        if(str == "Icosahedron") ans+= 20;
        else if(str == "Cube") ans+= 6;
        else if(str == "Tetrahedron") ans+= 4;
        else if(str == "Dodecahedron") ans+= 12;
        else if(str == "Octahedron") ans+= 8;
    }

    cout << ans << endl;


    return 0;
}