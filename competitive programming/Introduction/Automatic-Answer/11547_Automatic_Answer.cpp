#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    if (t >= 1 && t <= 100) {
        for (int j = 0; j < t; j++) {
            int n;
            cin >> n;

            if (n >= -1000 && n <= 1000) {
                n = n * 567;
                n = n / 9;
                n = n + 7492;
                n = n * 235;
                n = n / 47;
                n = n - 498;

                string centinela = to_string(n);
                string auxiliar = "";

                for (int i = centinela.length() - 1; i > 0; i--) {
                    auxiliar += centinela[i];
                }

                cout << auxiliar[1] << endl;
            }
        }
    }

    return 0;
}
