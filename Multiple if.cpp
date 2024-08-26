#include <iostream>
using namespace std;

int main() {

    int subject1, subject2;
    cout << "Enter marks for subject 1: ";
    cin >> subject1;
    cout << "Enter marks for subject 2: ";
    cin >> subject2;

  
    if (subject1 >= 40 || subject2 >= 40) {
        cout << "Passed" << endl;
    }


    if (subject1 >= 40) {
        cout << "Passed due to subject 1" << endl;
    }

  
    if (subject2 >= 40) {
        cout << "Passed due to subject 2" << endl;
    }


    if (subject1 >= 40 && subject2 >= 40) {
        cout << "Passed due to both subjects" << endl;
    }

    return 0;
}
