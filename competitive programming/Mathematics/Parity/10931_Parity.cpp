#include <iostream>
#include <string>

using namespace std;

string decimalABinario(int decimal) {
    string binario = "";
    while (decimal != 0) {
        binario = to_string(decimal % 2) + binario;
        decimal = decimal / 2;
    }
    return binario;
}

int contarBinario(int decimal) {
    string binario = decimalABinario(decimal);
    int contador = 0;
    for (int i = 0; i < binario.length(); i++) {
        if (binario[i] == '1') {
            contador += 1;
        }
    }
    return contador;
}

int main() {
    int I;
    cin >> I;
    while (I >= 1 && I <= 2147483647) {
        while (I > 0) {
            cout << "The parity of " << I << " is " << contarBinario(I) << " (mod 2)." << endl;
            cin >> I;
            if (I < 1 || I > 2147483647) {
                break;
            }
        }
    }
    return 0;
}

