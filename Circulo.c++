#include <iostream>
#include <cmath>

class Circulo {
    double radio;

public:
    Circulo(double radioInicial) {
        radio = radioInicial;
    }

    double calcularArea() {
        return M_PI * radio * radio;
    }

    double calcularPerimetro() {
        return 2 * M_PI * radio;
    }

    void cambiarRadio(double nuevoRadio) {
        radio = nuevoRadio;
    }
};

int main() {
    Circulo miCirculo(5.0);

    double area = miCirculo.calcularArea();
    std::cout << "Área del círculo: " << area << std::endl;

    double perimetro = miCirculo.calcularPerimetro();
    std::cout << "Perímetro del círculo: " << perimetro << std::endl;

    return 0;
}