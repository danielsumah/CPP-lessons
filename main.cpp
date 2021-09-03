#include <iostream>

using namespace std;


int main()
{
    int n1, n2, result;
    char op;

    cout << "Enter your first number : ";
    cin >> n1;

    cout << "Enter your Second number : ";
    cin >> n2;

    cout << "Enter Operation : ";
    cin >> op;

    //cout << performCal(n1, n2, op);
    if(op == '+'){
        result = n1 + n2;
    } else if (op == '-'){
        result = n1 - n2;
    } else if (op == '*'){
        result = n1 * n2;
    }else if (op == '/'){
        result = n1 / n2;
    }else{
        cout << "Invalid Operator entered" << endl;
    }
    cout << result;
}
