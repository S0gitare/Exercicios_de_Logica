//* Faça um Programa que converta metros para centímetros.

#include <iostream>
using namespace std;

int main() {
    float metros, centimetros;
    cout << "Digite a quantidade de metros: ";
    cin >> metros;
    centimetros = metros * 100;
    cout << metros << " metros equivalem a " << centimetros << " centimetros." << endl;
    return 0;
}