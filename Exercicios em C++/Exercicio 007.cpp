//* Faça um Programa que calcule a área de um quadrado, em seguida mostre o dobro desta área para o usuário.

#include <iostream>
using namespace std;

int main(){
    int lado, area;
    cout << "Digite o tamanho do lado do quadrado: ";
    cin >> lado;
    area = lado * 4;
    cout << "A area do quadrado e: " << area << endl;
    cout << "O dobro da area do quadrado e: " << area * 2 << endl;
    return 0;
}