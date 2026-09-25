#include<iostream>

using namespace std;

float Add(float num1, float num2)
{
    return num1+num2;
}

float Subtract(float num1, float num2)
{
    return num1-num2;
}

float Multiply(float num1, float num2)
{
    return num1*num2;
}

float Divide(float num1, float num2)
{
    if (num2 == 0)
    {
        cout << "Error: Cannot divide by 0" << endl;
        return 0;
    }
    else return num1/num2;
}

int main()
{
    char again;

    do
    {
        float num1, num2;

        cout << "Enter two numbers: " << endl;

        cin >> num1 >> num2;

        char userInputOperator;

        cout << "Type +|-|*|/ to continue operation: " << endl;

        cin >> userInputOperator;

        if (userInputOperator == '+') cout << num1 << " + " << num2 << " = " << Add(num1, num2) << endl;
        else if (userInputOperator == '-') cout << num1 << " - " << num2 << " = " << Subtract(num1, num2) << endl;
        else if (userInputOperator == '*') cout << num1 << " * " << num2 << " = " << Multiply(num1, num2) << endl;
        else if (userInputOperator == '/') cout << num1 << " / " << num2 << " = " << Divide(num1, num2) << endl;
        else cout << "Invalid input!" << endl;

        cout << "Again (y/n): " << endl;

        cin >> again;
    }
    while (again == 'y');
}