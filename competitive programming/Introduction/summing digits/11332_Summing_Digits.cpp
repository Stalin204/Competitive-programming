
#include <iostream>

int digits(int numero) {
    int digitos = 0;
    while (numero != 0) {
        int x = numero % 10;
        numero /= 10;
        digitos += 1;
    }
    return digitos;
}

int calculatorSum(int numero) {
    int sum = 0;
    while (numero != 0) {
        int x = numero % 10;
        sum += x;
        numero /= 10;
    }
    return sum;
}

int main() {
    int numero;
    while (true) {
        std::cin >> numero;
        if (numero != 0) {
            while (true) {
                if (numero == 0) {
                    std::cout << numero;
                    break;
                }
                numero = calculatorSum(numero);

                if (digits(numero) == 1) {
                    std::cout << numero << std::endl;
                    break;
                }
            }
        } else {
            break;
        }
    }
    return 0;
}
