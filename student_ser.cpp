#include <iostream>
using namespace std;

int main() {
    int student[5];
    int searchRollNo;

    cout << "Enter 5 student roll numbers:\n";
    for (int i = 0; i < 5; ++i) {
        cin >> student[i];
    }

    cout << "\nEnter the student roll number to search: ";
    cin >> searchRollNo;

    for (int i = 0; i < 5; ++i) {
        if (student[i] == searchRollNo) {
            cout << "\nStudent found at position " << (i + 1) << ".\n";
            return 0;
        }
    }

    cout << "\nStudent not found.\n";
    return 0;
}
