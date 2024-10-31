//* Faça um Programa que peça a temperatura em graus Celsius, transforme e mostre em graus Farenheit.

#include <iostream>
using namespace std;

int main(){
    float F, C;
    cout << "Informe a temperatura em Celsius: "; cin >> C;
    F = ((C * 9/5) + 32);
    cout << "Temperatura em Fahrenheit: " << F << endl;
    return 0;
}