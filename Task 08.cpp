#include <iostream>
using namespace std;

int main() {
    int age, activities;
    double fee = 0, reduction = 0, finalFee;

    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter number of activities attended: ";
    cin >> activities;

    // Input validation
    if (age < 0 || activities < 0) {
        cout << "Invalid input! Age and activities cannot be negative." << endl;
        return 0;
    }

    // Determine membership fee and reduction based on age
    if (age <= 6) {
        fee = 5;
        reduction = 0.75;
    }
    else if (age >= 7 && age <= 12) {
        fee = 10;
        reduction = 1.25;
    }
    else if (age >= 13 && age <= 18) {
        fee = 15;
        reduction = 2;
    }
    else if (age > 18) {
        fee = 25;
        reduction = 2;
    }
    finalFee = fee - (activities * reduction);

    // Minimum fee is $1
    if (finalFee < 1)
        finalFee = 1;

    cout << "Your membership fee is: $" << finalFee << endl;

    return 0;
}
