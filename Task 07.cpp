#include <iostream>
using namespace std;

int main() {
    int books;
    int points = 0;

    cout << "Enter the number of books purchased this month: ";
    cin >> books;

    if (books < 0) {
        cout << "Invalid input! Number of books cannot be negative." << endl;
        return 0;
    }
    if (books == 0)
        points = 0;
    else if (books == 1)
        points = 5;
    else if (books == 2)
        points = 15;
    else if (books == 3)
        points = 30;
    else if (books >= 4)
        points = 60;

    cout << "You have earned " << points << " points this month." << endl;

    return 0;
}
