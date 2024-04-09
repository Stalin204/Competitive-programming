
#include <iostream>
#include <string>
using namespace std;
int main() {
  string arreglo[11]{"zero", "one",   "two",   "three", "four", "five",
                     "six",  "seven", "eight", "nine",  "ten"};
  int x = 0;
  cin >> x;
  if (x <= 10 && x > 0) {
    while (x > 0) {
      string centinela = "";
      cin >> centinela;
      int longitud = sizeof(arreglo) / sizeof(arreglo[0]);
      for (int i = 0; i < longitud; i += 1) {
        string auxiliar = arreglo[i];
        int number = 0;
        for (int j = 0; j < auxiliar.length(); j += 1) {
          if (centinela[j] != auxiliar[j]) {
            number += 1;
          }
        }
        if (number == 0 || number == 1) {
          cout << i << endl;
        }
      }
      centinela = "";
      x -= 1;
    }
  }

  return 0;
}
