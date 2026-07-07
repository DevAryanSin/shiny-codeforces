#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int a ,b ,c;
    cin >> a >> b >> c;

    int arr[3] = {a,b,c};
    sort(arr,arr+3);
    int median = arr[1];

    cout << abs(median - arr[0]) + abs(median - arr[1]) + abs(median-arr[2]) << endl;

    return 0;
}
