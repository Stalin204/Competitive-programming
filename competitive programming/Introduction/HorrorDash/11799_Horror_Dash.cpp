#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    for (int t = 1; t <= T; ++t) {
        int N;
        cin >> N;
        int centinela = 0;
        
        for (int i = 0; i < N; ++i) {
            int speed;
            cin >> speed;
            
            if (speed > centinela) {
                centinela = speed;
            }
        }
        
        cout << "Case " << t << ": " << centinela << endl;
    }
    
    return 0;
}

