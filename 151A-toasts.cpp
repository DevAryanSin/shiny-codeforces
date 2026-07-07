#include <iostream> 
using namespace std;

int main(){
    int n, k,l,c,d,p,nl,np;
    cin >> n >> k >> l>>c >> d >> p >> nl >> np;

    int total_drink = k * l;
    int no_of_toasts = total_drink / nl;
    int lime_toast = c * d;
    int salt_toast = p / np;
    int ans = min(no_of_toasts,min(lime_toast,salt_toast)) / n;
    cout <<  ans << endl;

    return 0;
}