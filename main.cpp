#include <iostream>

using namespace std;

int main()
{
    // collecting char and int using "cin"

    //collecting strings with "get line"
    string watchword;
    cout << "enter your watchword : ";
    getline(cin, watchword);
    cout << "your watchword is " << watchword ;

    return 0;
}
