//Write a c++ program to store the IDs of 2 library books and display all the book IDs entered by the user 
#include <iostream>
#include <string>
using namespace std;


int main() {

    int id1, id2, id3;
    string title1, title2, title3;

    cout << "Enter Book1 ID: ";
    cin >> id1;

    cin.ignore();
    cout << "Enter Book1 Title: ";
    getline (cin, title1);

    cout << endl;

    cout << "Enter Book2 ID:  ";
    cin >> id2;

    cin.ignore();
    cout << "Enter Book2 Title: ";
    getline (cin, title2);

    cout << endl;

    cout << "Enter Book3 ID: ";
    cin >> id3;

    cin.ignore();
    cout << "Enter Book3 Title: ";
    getline (cin, title3);

    

    cout << endl;
    cout << endl;
    cout << endl;


    
    cout << "Library Books: " << endl;

    cout << endl;
    cout << endl;

    cout << "Book ID: " << id1 << endl;
    cout << "Book Title: " << title1 << endl;
    
    cout << endl;

    cout << "Book ID: " << id2 << endl;
    cout << "Book Title: " << title2 << endl;

    cout << endl;

    cout << "Book ID: " << id2 << endl;
    cout << "Book Title: " << title3 << endl;

    return 0;

}
