#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // working with numbers

    // whole numbers are int while decimal numbers are floats and doubles
    cout << 5 + 11 << endl;
    cout << 5 - 11 << endl;
    cout << 5 * 11 << endl;
    cout << 5 / 11 << endl;
    cout << 5 / 11.0 << endl;
    cout << 23 % 11 << endl;

    // basic math functions
    // exponential
    cout << pow(2,5) << endl;

    //square roots
    cout << sqrt(36) << endl;

    // rounding numbers up or down
    cout << round(4.6) << endl;

    //rounding numbers up only
    cout << ceil(4.1) << endl;

    //rounding numbers down only
    cout << floor(4.9) << endl;

    // determining the bigger number
    cout << fmax(3,10) << endl;

    // determining the smaller number
    cout << fmin(3,10) << endl;

    return 0;
}
