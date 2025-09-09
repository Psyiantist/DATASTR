#include <iostream>
using namespace std;

int main() {
    cout << "For Loop (1 to 5):" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl << endl;

    cout << "While Loop (5 down to 1):" << endl;
    int j = 5;
    while (j >= 1) {
        cout << j << " ";
        j--;
    }
    cout << endl << endl;

    cout << "Do-While Loop (prints at least once, counting up to 3):" << endl;
    int k = 1;
    do {
        cout << k << " ";
        k++;
    } while (k <= 3);
    cout << endl;

    return 0;
}
