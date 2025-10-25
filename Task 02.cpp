#include <iostream>
#include <string>
using namespace std;

int main() {
    string color1, color2;

    cout << "Enter first primary color (red, blue, yellow): ";
    cin >> color1;
    cout << "Enter second primary color (red, blue, yellow): ";
    cin >> color2;

    if ((color1 == "red" && color2 == "blue") || (color1 == "blue" && color2 == "red")) {
        cout << "Mixing red and blue makes purple." << endl;
    }
    else if ((color1 == "red" && color2 == "yellow") || (color1 == "yellow" && color2 == "red")) {
        cout << "Mixing red and yellow makes orange." << endl;
    }
    else if ((color1 == "blue" && color2 == "yellow") || (color1 == "yellow" && color2 == "blue")) {
        cout << "Mixing blue and yellow makes green." << endl;
    }
    else if (color1 == color2) {
        cout << "You entered the same colors, so the result is " << color1 << "." << endl;
    }
    else {
        cout << "Error: Invalid color entered!" << endl;
    }

    return 0;
}
