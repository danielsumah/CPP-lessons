#include <iostream>

using namespace std;


int main()
{
    int rightNumber, userNumber, limit, trial;
    rightNumber = 8;
    trial = 0;
    limit = 3;

    while(trial != limit){
        trial++;
        if(rightNumber!=userNumber){
            cout << "Enter your guess : ";
            cin >> userNumber;

        }else{
            cout << "You guessed Right ";
            return 0;
        }
    }
    cout << "You have exhausted your guess limit";


}
