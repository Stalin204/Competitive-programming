#include <iostream> // Se incluye la cabecera <iostream> en lugar de <istream>
using namespace std;
// NOTE:Terminar el error que me genera
int main() {
  int matriz[6][6]{{25, 24, 23, 22, 21, 5}, {10, 11, 12, 13, 20, 4},
                   {9, 8, 7, 14, 19, 3},    {2, 3, 6, 15, 18, 2},
                   {1, 4, 5, 16, 17, 1},    {1, 2, 3, 4, 5}};
  int centinela = -1;
  while (true) {
    cin >> centinela;
    if (centinela != 0) {
      for (int i = 1; i <= 5; i += 1) {

        for (int j = 1; j <= 5; j += 1) {

          if (matriz[i][j] == centinela) {
            cout << i << +"" << j << endl;
            i = 5;
            j = 5;
          }
        }
      }
    } else {
      break;
    }
  }
  return 0;
}
