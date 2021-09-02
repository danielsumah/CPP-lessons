#include <iostream>

using namespace std;

int main()
{
    // arrays

    int numbers[] = {5,2,7,4,5,2};
    cout << numbers[1] << endl;

    //modifying numbers in an array
    numbers[2] = 20;
    cout << numbers[2] << endl;

    // you can tell how much elements goes into the array
    int numbers2[5];
    numbers2[0] = 4;
    cout << numbers2[0];


    return 0;
}
