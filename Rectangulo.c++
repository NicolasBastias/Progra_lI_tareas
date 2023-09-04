#include <iostream>

class Rectangulo {
    double longitud;
    double ancho;

public:
    Rectangulo(double longitudInicial, double anchoInicial) {
        longitud = longitudInicial;
        ancho = anchoInicial;
    }

    double calcularArea() {
        return longitud * ancho;
    }

    double calcularPerimetro() {
        return 2 * (longitud + ancho);
    }

    void cambiarLongitud(double nuevaLongitud) {
        longitud = nuevaLongitud;
    }

    void cambiarAncho(double nuevoAncho) {
        ancho = nuevoAncho;
    }
};

int main() {
    Rectangulo miRectangulo(5.0, 3.0);

    double area = miRectangulo.calcularArea();
    std::cout << "Área del rectángulo: " << area << std::endl;

    double perimetro = miRectangulo.calcularPerimetro();
    std::cout << "Perímetro del rectángulo: " << perimetro << std::endl;

    return 0;
}