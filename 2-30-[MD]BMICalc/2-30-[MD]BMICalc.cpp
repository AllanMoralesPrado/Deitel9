// 2-30-[MD]BMICalc.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::cerr;

int main()
{
    double weight, height, BMI;

    cout << "BMI CALCULATOR --K&m ver.--\n";
        
    cout << "Enter your weight in kilograms: "; cin >> weight;
    cout << "Enter your height in meters: "; cin >> height;

    if (height == 0.0) {
        cerr << "Error: height must not equal to 0.0\n";
        exit(EXIT_FAILURE);
    }
        
    BMI = weight / (height * height);

    cout << "\nBMI result = " << BMI << endl;

    cout << "\nBMI VALUES"
        << "\nLow weight:\tless than 18.5"
        << "\nNormal:\t\tbetween 18.5 and 24.9"
        << "\nOverweight:\tbetween 25.0 and 29.9"
        << "\nObese:\t\tgreater than 30.0\n";
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
