#include <iostream>

using namespace std;

int main()
{
    // working with strings

    //end a line with "endl"
    cout << "Hello world" << endl;

    // you can also use escape sequence for a new line
    cout << "Hello world\n";

    //count the number of a char in a string with the length method
    string sent = "Welcome to first bank";
    cout << sent.length() << endl;

    //string indexing
    cout << sent[4] << endl;

    // finding substrings and characters in a string
    cout << sent.find("come", 0) << endl;

    // grabbing substrings
    // you specify the "(starting position, no of sting)"
    cout << sent.substr(5, 4) << endl;

    return 0;
}
