#include <iostream>
using namespace std;

int main() {
    string fullName, courseYrSec, birthday, motto;

    cout << "Enter your Full Name (no spaces): ";
    cin >> fullName;

    cout << "Enter your Course, Year & Section (no spaces): ";
    cin >> courseYrSec;

    cout << "Enter your Birthday (no spaces): ";
    cin >> birthday;

    cout << "Enter your Motto/Motivation in Life (no spaces): ";
    cin >> motto;

    cout << "\nHi! I'm " << fullName 
         << " of " << courseYrSec 
         << ". Welcome to Data Structures and Algorithm!" << endl;

    cout << "My birthday is on " << birthday 
         << " and my motto/motivation in life is " << motto << "." << endl;

    return 0;
}
