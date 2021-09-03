#include <iostream>

using namespace std;

int getMax(int n1, int n2, int n3){
    if(n1 >= n2 && n1 >= n3){
        return n1;
    } else if (n2 >= n1 && n2 >= n3){
        return n2;
    } else {
        return n3;
    }
}
int main()
{
    cout << getMax(320,54,60);
    return 0;
}
