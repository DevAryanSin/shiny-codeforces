#include <iostream>
#include <string>
using namespace std;

int main() {
    string st;
    cin >> st;

    int count = 0;

    for (char c : st) {
        if (c == '4' || c == '7')
            count++;
    }

    string s = to_string(count);

    bool status = true;

    for (char c : s) {
        if (c != '4' && c != '7') {
            status = false;
            break;
        }
    }

    cout << (status ? "YES" : "NO") << endl;

    return 0;
}