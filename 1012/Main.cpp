#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.14159;

double CalculaAreaTriangulo(double dBase, double dAltura)
{
    return dBase * dAltura / 2;
}

double CalculaAreaCirculo(double dRaio)
{
    return PI * pow(dRaio, 2);
}

double CalculaAreaTrapezio(double dPrimeiraBase, double dSegundaBase, double dAltura)
{
    return ((dPrimeiraBase + dSegundaBase) * dAltura) / 2;
}

double CalculaAreaQuadrado(double dLado)
{
    return pow(dLado, 2);
}

double CalculaAreaRetangulo(double dLadoA, double dLadoB)
{
    return dLadoA * dLadoB;
}


int main() {

    double  dValorA = 0;
    double  dValorB = 0;
    double  dValorC = 0;

    cin >> dValorA >> dValorB >> dValorC;

    cout.precision(3);
    cout << fixed << "TRIANGULO: " << CalculaAreaTriangulo(dValorA, dValorC) << endl;
    cout << fixed << "CIRCULO: " << CalculaAreaCirculo(dValorC) << endl;
    cout << fixed << "TRAPEZIO: " << CalculaAreaTrapezio(dValorA, dValorB, dValorC) << endl;
    cout << fixed << "QUADRADO: " << CalculaAreaQuadrado(dValorB) << endl;
    cout << fixed << "RETANGULO: " << CalculaAreaRetangulo(dValorA, dValorB) << endl;

    return 0;
}