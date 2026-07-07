#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int> ans(n);

    for(int i = 0;i < n;i++){
        cin >> ans[i];
    }

    int maxInd = 0,minInd = 0;

    for(int i = 1;i < n;i++){
        if(ans[i] > ans[maxInd]){
            maxInd = i;
        }
    }

    for(int i =1;i < n;i++){
        if(ans[i] <= ans[minInd])minInd = i;
    }

    int res = maxInd + (n - 1 - minInd);

    if(maxInd > minInd) res--;

    cout << res << endl;

    return 0;

}