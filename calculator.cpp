#include <iostream>

using namespace std;

class Calculator
{
public:
    int Calculate(int, int, char);
};

int Calculator::Calculate(int x, int y, char oper)
{
    switch (oper)
    {
    case '+':
        return x + y;
    case '-':
        return x - y;
    case '*':
        return x * y;
    case '/':
        if (y != 0)
            return x / y;
    default:
        return 0;
    }
}

int main()
{

    int x, y, result;
    char oper;
    cout << " SimpleCalculator" << endl;

    cout << "1. Enter first num \n"
            "2. Select operator ['+', '-', '*', '/'] \n"
            "3. Enter second num"
         << endl;
    cin >> x >> oper >> y;
    Calculator c;
    result = c.Calculate(x, y, oper);
    cout << "Result : " << result << endl;

    cin.ignore();
    cin.get();

    return 0;
}