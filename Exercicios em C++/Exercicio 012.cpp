//* Tendo como dados de entrada a altura de uma pessoa, construa um algoritmo
//* Que calcule seu peso ideal, usando a seguinte fórmula: (72.7*altura) - 58

#include <iostream>
using namespace std;

int main(){
    float altura;
    cout << "Informe a altura (em metros): "; cin >> altura;

    float pesoideal = (72.7 * altura) - 58;
    cout << "O seu peso ideal e: " << pesoideal << " kg" << endl;
    return 0;
}