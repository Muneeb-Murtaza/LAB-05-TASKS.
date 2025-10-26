#include <iostream>
using namespace std;

int main() {
    const double PRICE = 99.0;   // price per package
    int quantity;
    double discount = 0.0;
    double totalCost;

    cout << "Enter number of units sold: ";
    cin >> quantity;

    if (quantity <= 0) {
        cout << "Invalid input! Quantity must be greater than 0." << endl;
        return 0;
    }

    if (quantity >= 10 && quantity <= 19)
        discount = 0.20;
    else if (quantity >= 20 && quantity <= 49)
        discount = 0.30;
    else if (quantity >= 50 && quantity <= 99)
        discount = 0.40;
    else if (quantity >= 100)
        discount = 0.50;

    totalCost = quantity * PRICE * (1 - discount);

    cout << "Discount applied: " << discount * 100 << "%" << endl;
    cout << "Total cost after discount: $" << totalCost << endl;

    return 0;
}
