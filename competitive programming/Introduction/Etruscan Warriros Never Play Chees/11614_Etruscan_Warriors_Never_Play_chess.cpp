#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    double centinela = pow(10, 18);
    if (n >= 0 && n <= centinela) {
        for (int i = 0; i < n; i++) {
            int k;
            cin >> k;
            int contador = 0;
            int auxiliar = k;
            for (int j = 1; j <= k; j += 1) {
                auxiliar = auxiliar - j;
                if (auxiliar >= j) {
                    auxiliar = auxiliar - j;
                    contador += 1;
                }
            }
            cout << contador << endl;
        }
    }

    return 0;
}
