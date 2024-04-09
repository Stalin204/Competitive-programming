
#include <iostream>
#include <string>
using namespace std;
string isBinario(int numero) {
  int x = 0;
  int y = 0;
  string centinela;
  while (numero != 0) {
    x = numero % 2;
    centinela = to_string(x) + centinela;
    numero /= 2;
  }
  return centinela;
}
int calcularEntero(string binario) {
  int centinela = 0;
  for (int i = 0; i < binario.length(); i += 1) {
    if (binario[i] == '1') {
      centinela += 1;
    }
  }
  return centinela;
}
int main() {
  while (true) {
    int I = 0;
    std::cin >> I;
    if (I == 0) {
      return 0;
    } else {

      string centinela = isBinario(I);
      cout << " The parity of " << centinela << " is "
           << calcularEntero(centinela) << " (mod 2), " << endl;
      centinela = "";
    }
  }
  return 0;
}
