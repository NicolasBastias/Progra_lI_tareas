class Circulo:
    def __init__(self, radio):
        self.radio = radio

    def calcular_area(self):
        return 3.14* self.radio**2

    def calcular_perimetro(self):
        return 2 * 3.14 * self.radio

    def cambiar_radio(self, nuevo_radio):
        self.radio = nuevo_radio

if __name__ == "__main__":
    #radio inicial
    mi_circulo = Circulo(5.0)

    area = mi_circulo.calcular_area()
    print(f"El area del circulo es: {area}")

    perimetro = mi_circulo.calcular_perimetro()
    print(f"El perimetro del circulo es: {perimetro}")
