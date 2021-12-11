// 2-16-Aritmetica.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    //Reading data
    int number1, number2;
    cout << "Enter two integer numbers: ";
    cin >> number1 >> number2;

    //Writing aritmetic results
    cout << number1 << " + " << number2 << " = " << number1 + number2 << endl;
    cout << number1 << " - " << number2 << " = " << number1 - number2 << endl;
    cout << number1 << " * " << number2 << " = " << number1 * number2 << endl;
    if (number2 != 0)
        cout << number1 << " / " << number2 << " = " << number1 / number2 << endl;
    else
        cout << "Error: #DIV/0" << endl;
    system("PAUSE");
}