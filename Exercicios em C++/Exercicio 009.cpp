//* Faça um Programa que peça a temperatura em graus Farenheit, transforme
//* E mostre a temperatura em graus Celsius. C = (5 * (F-32) / 9).

#include <iostream>
using namespace std;

int main(){
    float F, C;
    cout << "Informe a temperatura em Farenheit: ";
    cin >> F;
    C = ((F - 32)* 5/9);
    cout << "Temperatura em Celsius: " << C << endl;
    return 0;
}