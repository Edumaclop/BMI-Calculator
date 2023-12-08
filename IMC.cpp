#include <iostream>

using namespace std;

double calcularIMC(double peso, double altura) {
    if (peso <= 0 || altura <= 0) {
        cout << "Error: Peso y altura deben ser valores positivos." << endl;
        return -1;
    }

    return peso / (altura * altura);
}

void interpretarIMC(double imc) {
    if (imc == -1) {
        return;
    }

    cout << "Tu IMC es: " << imc << endl;

    if (imc < 18.5) {
        cout << "Peso insuficiente" << endl;
    } else if (imc >= 18.5 && imc < 25) {
        cout << "Peso normal" << endl;
    } else if (imc >= 25 && imc < 30) {
        cout << "Sobrepeso" << endl;
    } else {
        cout << "Obesidad" << endl;
    }
}

int main() {
    double peso, altura;

    cout << "Ingrese su peso en kilogramos: ";
    cin >> peso;

    cout << "Ingrese su altura en metros: ";
    cin >> altura;

    double imc = calcularIMC(peso, altura);
    interpretarIMC(imc);

    return 0;
}