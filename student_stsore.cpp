#include <iostream>
using namespace std;

int main() {
    int marks[5];

    // Input marks
    cout << "Enter marks for 5 students:\n";
    for (int i = 0; i < 5; ++i) {
        cout << "Student " << (i + 1) << ": ";
        cin >> marks[i];
    }

    // Sort in descending order (bubble sort)
    for (int i = 0; i < 5 - 1; ++i) {
        for (int j = 0; j < 5 - 1 - i; ++j) {
            if (marks[j] < marks[j + 1]) {
                int temp = marks[j];
                marks[j] = marks[j + 1];
                marks[j + 1] = temp;
            }
        }
    }

    // Display sorted marks
    cout << "\nMarks in descending order:\n";
    for (int i = 0; i < 5; ++i) {
        cout << "Rank " << (i + 1) << ": " << marks[i] << endl;
    }

    return 0;
}
