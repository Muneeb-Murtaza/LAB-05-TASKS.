#include <iostream>
#include <cstdlib>   // for rand() and srand()
#include <ctime>     // for time()
using namespace std;

int main() {
    int num1, num2, userAnswer, correctAnswer;

    // make random numbers different each time
    srand(time(0));

    // generate two random numbers between 1 and 500
    num1 = rand() % 500 + 1;
    num2 = rand() % 500 + 1;

    cout << "   " << num1 << endl;
    cout << "+  " << num2 << endl;
    cout << "---------" << endl;
    cout << "Enter your answer: ";
    cin >> userAnswer;

    correctAnswer = num1 + num2;

    if (userAnswer == correctAnswer)
        cout << "Congratulations! Your answer is correct." << endl;
    else
        cout << "Oops! The correct answer is " << correctAnswer << "." << endl;

    return 0;
}
