
#include <iostream>
#include <string>

using namespace std;

int digitos(int numero) {
    int x = 0;
    int digitos = 0;
    while (numero != 0) {
        x = numero % 10;
        numero = numero / 10;
        digitos += 1;
    }
    return digitos;
}

int calcularNumero(int numero) {
    int y = 0;
    while (numero != 0) {
        y += numero % 10;
        numero = numero / 10;
    }
    return y;
}

int leerCadena(string cadena) {
    string auxiliar = "abcdefghijklmnopqrstuvwxyz";
    int centinela = 0;
    for (int i = 0; i < cadena.length(); i += 1) {
        for (int j = 0; j < auxiliar.length(); j += 1) {
            if (cadena[i] == auxiliar[j]) {
                centinela += j + 1;
            }
        }
    }
    return centinela;
}

void print(double resultado) {
    cout << "valor: " << resultado * 100 << " % ";
}

int main() {
    string cadena, cadena2;
    while (getline(cin, cadena) && getline(cin, cadena2)) {
        double resultado = 0;
        if (cadena.empty() && cadena2.empty()) {
            break;
        } else {
            int x = calcularNumero(leerCadena(cadena));
            int y = calcularNumero(leerCadena(cadena2));
            if (digitos(x) == 1 && digitos(y) == 1) {
                if (x > y) {
                    resultado = (double)y / x;
                    print(resultado);
                } else {
                    resultado = (double)x / y;
                    print(resultado);
                }
            } else {
                if (digitos(x) == 1 && digitos(y) > 1) {
                    while (true) {
                        y = calcularNumero(y);
                        if (digitos(y) == 1) {
                            if (x > y) {
                                resultado = (double)y / x;
                                print(resultado);
                                break;
                            } else {
                                resultado = (double)x / y;
                                print(resultado);
                                break;
                            }
                        }
                    }
                } else if (digitos(x) > 1 && digitos(y) == 1) {
                    while (true) {
                        x = calcularNumero(x);
                        if (digitos(x) == 1) {
                            if (x > y) {
                                resultado = (double)y / x;
                                print(resultado);
                                break;
                            } else {
                                resultado = (double)x / y;
                                print(resultado);
                                break;
                            }
                        }
                    }
                } else if (digitos(x) > 1 && digitos(y) > 1) {
                    while (true) {
                        x = calcularNumero(x);
                        y = calcularNumero(y);
                        if (digitos(x) == 1 && digitos(y) == 1) {
                            if (x > y) {
                                resultado = (double)y / x;
                                print(resultado);
                                break;
                            } else {
                                resultado = (double)x / y;
                                print(resultado);
                                break;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
