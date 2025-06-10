#include <iostream> // Incluye la biblioteca estándar de entrada/salida
using namespace std; //Ayuda a evitar escribir std:: antes de cada uso de cout, cin, etc.


/*
Sintaxis de básica de C++
*/

int main() {
    cout << "¡Hola, soy David! " <<'\n'; //Salto de linea con <<std::endl o \n;
    cout << "¡Vivo en Colombia!" << '\n' <<"-------------------" << '\n';

    cout << "VARIABLES EN C++" << '\n' << "------------------" << '\n';

    // Declaración de variable
    int edad = 25; // Declaración e inicialización de una variable entera
    cout << "Edad: " << edad << '\n'; // Imprimir el valor de la variable

    // Declaración de variable con tipo de dato double
    double altura = 1.75; // Declaración e inicialización de una variable de tipo double
    cout << "Altura: " << altura << " metros" << '\n'; // Imprimir el valor de la variable

    // Declaración de variable con tipo de dato char
    char inicial = 'D'; // Declaración e inicialización de una variable de tipo char
    cout << "Inicial: " << inicial << '\n'; // Imprimir el valor de la variable

    

    return 0;
}
