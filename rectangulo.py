class rectangulo:
    def __init__(self,longitud,ancho):
        self.longitud = longitud
        self.ancho = ancho
    
    def Calculararea(self):
        return self.longitud*self.ancho
    
    def Calcularperimetro(self):
        return (self.longitud*2)+(self.ancho*2)

mi_rectangulo = rectangulo(5.0, 3.0)

area = mi_rectangulo.Calculararea()
print("El area es:", area)

perimetro = mi_rectangulo.Calcularperimetro()
print("El perimetro es:", perimetro)    
    
    
