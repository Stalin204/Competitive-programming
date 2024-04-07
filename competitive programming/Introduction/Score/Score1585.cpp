#include <iostream>
#include <string>

using namespace std;

int main() {
    int T;
    cin >> T;
    cin.ignore(); // Consumir el carácter de nueva línea pendiente

    for (int i = 0; i < T; i++) {
        string line;
        getline(cin, line);
        int score = 0;
        int consecutiveO = 0;
        for (char c : line) {
            if (c == 'O') {
                consecutiveO++;
                score += consecutiveO;
            } else {
                consecutiveO = 0;
            }
        }
        cout << score << endl;
    }

    return 0;
}
