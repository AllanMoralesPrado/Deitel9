// 1-10-AdivinarNumero.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <ctime>
#include <cstdlib>
#define randomize srand(time(NULL))
#define random(num) rand()%num

int main()
{
    randomize;
    int number = random(1000), answer;
    std::cout << "Guess the number: ";
    do {
        std::cin >> answer;
        if (answer > number)
            std::cout << "Lower: ";
        else
            std::cout << "Greater: ";
    } while (answer != number);
    std::cout << "You win!\n";
}