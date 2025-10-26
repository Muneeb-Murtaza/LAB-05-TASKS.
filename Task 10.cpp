#include <iostream>
using namespace std;

int main() {
    double calories, fatGrams, caloriesFromFat, percentFromFat;

    cout << "Enter total calories: ";
    cin >> calories;

    cout << "Enter fat grams: ";
    cin >> fatGrams;

    // Input validation
    if (calories < 0 || fatGrams < 0) {
        cout << "Error: Calories and fat grams cannot be negative." << endl;
        return 0;
    }

    caloriesFromFat = fatGrams * 9;

    if (caloriesFromFat > calories) {
        cout << "Error: Calories from fat cannot be greater than total calories." << endl;
        return 0;
    }

    percentFromFat = (caloriesFromFat / calories) * 100;

    cout << "Percentage of calories from fat: " << percentFromFat << "%" << endl;

    if (percentFromFat < 30)
        cout << "This food is low in fat." << endl;

    return 0;
}
