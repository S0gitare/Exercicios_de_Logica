//* Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês.

#include <iostream>
using namespace std;

int main(){
    float Shora, horaMes, salariototal;
    cout << "Quanto você ganha por hora? ";
    cin >> Shora;
    cout << "Quantas horas você trabalhou no mês? ";
    cin >> horaMes;
    salariototal = Shora * horaMes;
    cout << "Salario total no mes: " << salariototal << endl;
    return 0;
}