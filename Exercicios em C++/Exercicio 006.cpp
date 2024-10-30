//* Faça um Programa que peça o raio de um círculo, calcule e mostre sua área.

#include <iostream>
using namespace std;

int main(){
    float raio;
    cout << "Informe o raio do circulo: ";
    cin >> raio;
    float area;
    area = 3.14159 * (raio * raio);

    cout << "Area do circulo: " << area << endl;
    return 0;
}