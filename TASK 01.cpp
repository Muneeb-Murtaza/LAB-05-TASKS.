#include <iostream>
using namespace std;

int main() {
    double num1, num2, num3, middle;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    // Check which number is in between
    if ((num1 > num2 && num1 < num3) || (num1 > num3 && num1 < num2))
        middle = num1;
    else if ((num2 > num1 && num2 < num3) || (num2 > num3 && num2 < num1))
        middle = num2;
    else
        middle = num3;

    cout << "The middle value is: " << middle << endl;

    return 0;
}
