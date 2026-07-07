#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int> ans;
        int place = 1;
        while(n > 0){
            int curr = n % 10;
            if(curr != 0){
                ans.push_back(curr * place);
            }

            place *= 10;
            n /= 10;
        }
        cout << ans.size() << endl;
        for(auto x : ans){
            cout << x << " "; 
        }
        cout << endl;
    }


    return 0;
}