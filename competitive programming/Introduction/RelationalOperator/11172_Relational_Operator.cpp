#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    int a, b;
    for (int i = 0; i < T; ++i) {
        cin >> a >> b;
        if (a < b) {
            cout << "<" << endl;
        } else if (a > b) {
            cout << ">" << endl;
        } else {
            cout << "=" << endl;
        }
    }
    return 0;
}
