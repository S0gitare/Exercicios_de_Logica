//* Faça um Programa que peça 2 números inteiros e um número real.
//* Calcule e mostre: o produto do dobro do primeiro com metade do segundo. 
//* A soma do triplo do primeiro com o terceiro. o terceiro elevado ao cubo.

#include <iostream>
using namespace std;

int main(){
    int N1, N2;
    float N3;
    float resultado1;
    cout << "Digite o primeiro numero inteiro: "; cin >> N1;
    cout << "Digite o segundo numero inteiro: "; cin >> N2;
    cout << "Digite o terceiro numero real: "; cin >> N3;
    resultado1 = (N1 *2) + (N2 /2);
    cout << "O produto do dobro do primeiro com metade do segundo e: " << resultado1 << endl;

    float resultado2 = (N1 *3) + N3;
    cout << "A soma do triplo do primeiro com o terceiro e: " << resultado2 << endl;

    float resultado3 = N3 * N3 * N3;
    cout << "O terceiro elevado ao cubo e: " << resultado3 << endl;
    return 0;
}